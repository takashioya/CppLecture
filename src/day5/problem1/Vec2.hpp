#pragma once
#include <iostream>
#include <cmath>
#include <type_traits>

struct Vec2
{
    double x, y;

    // constructor
    Vec2() = default;
    constexpr Vec2(const double _x, const double _y) : x(_x), y(_y) {}
    constexpr Vec2(const Vec2 &v) : x(v.x), y(v.y) {}

    // operator
    constexpr Vec2 operator+() const
    {
        return *this;
    }

    constexpr Vec2 operator-() const
    {
        return {-x, -y};
    }

    constexpr Vec2 operator+(const Vec2 &other) const
    {
        return {x + other.x, y + other.y};
    }

    constexpr Vec2 operator-(const Vec2 &other) const
    {
        return {x - other.x, y - other.y};
    }

    constexpr Vec2 operator*(double s) const
    {
        return {x * s, y * s};
    }

    constexpr Vec2 operator/(double s) const
    {
        return {x / s, y / s};
    }
    constexpr bool operator==(const Vec2 &other) const
    {
        return (x == other.x) && (y == other.y);
    }
    constexpr bool operator!=(const Vec2 &other) const
    {
        return !(*this == other);
    }

    // assignment operators
    Vec2 &operator=(const Vec2 &other)
    {
        x = other.x;
        y = other.y;
        return *this;
    }
    Vec2 &operator+=(const Vec2 &other)
    {
        x += other.x;
        y += other.y;
        return *this;
    }
    Vec2 &operator-=(const Vec2 &other)
    {
        x -= other.x;
        y -= other.y;
        return *this;
    }
    Vec2 &operator*=(const double s)
    {
        x *= s;
        y *= s;
        return *this;
    }
    Vec2 &operator/=(const double s)
    {
        x /= s;
        y /= s;
        return *this;
    }

    // special functions
    constexpr double dot(const Vec2 &other) const
    {
        return x * other.x + y * other.y;
    }
    constexpr double lengthSquare() const
    {
        return x * x + y * y;
    }
    double length() const
    {
        return std::sqrt(lengthSquare());
    }

    double distanceFrom(const Vec2 &other) const
    {
        return (*this - other).length();
    }
    constexpr bool isZero() const
    {
        return x == 0.0 && y == 0.0;
    }

    Vec2 normalized() const
    {
        if (x != 0 || y != 0)
        {
            return *this / length();
        }
        return *this;
    }

    void normalize() // normalize a Vec2 in place
    {
        if (x != 0 || y != 0)
        {
            *this /= length();
        }
    }

    // friends
    friend constexpr Vec2 operator*(const double d, const Vec2 &a) // scalar * v1
    {
        return a * d;
    }
    friend constexpr Vec2 prod(const Vec2 &a, const Vec2 &b) // term by term *
    {
        return {a.x * b.x, a.y * b.y};
    }
    friend constexpr double dot(const Vec2 &a, const Vec2 &b)
    {
        return a.x * b.x + a.y * b.y;
    }
    friend constexpr double distanceSquare(const Vec2 &a, const Vec2 &b)
    {
        double dx = b.x - a.x;
        double dy = b.y - a.y;
        return dx * dx + dy * dy;
    }
    friend double distance(const Vec2 &a, const Vec2 &b)
    {
        return std::sqrt(distanceSquare(a, b));
    }
};

// stream
template <class Char>
inline std::basic_ostream<Char> &operator<<(std::basic_ostream<Char> &os, const Vec2 &v)
{
    return os << Char('(') << v.x << Char(',') << v.y << Char(')');
}

template <class Char>
inline std::basic_istream<Char> &operator>>(std::basic_istream<Char> &is, Vec2 &v)
{
    return is >> v.x >> v.y;
}