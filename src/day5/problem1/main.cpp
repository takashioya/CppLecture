#include <iostream>
#include <cmath>
#include "Vec2.hpp"
using namespace std;

double cross(Vec2 a, Vec2 b) // 外積を計算
{
    return a.x * b.y - a.y * b.x;
}

// a1, a2を結ぶ直線と線分b1_b2が交差するかを判定
bool is_intersected_lines(Vec2 a1, Vec2 a2, Vec2 b1, Vec2 b2) 
{   // a1_a2を結ぶ直線からみて、b1とb2が同じ側にいればfalse、違う側にいればtrueを返す
    return (cross(a2 - a1, b1 - a1) * cross(a2 - a1, b2 - a1)) <= 0;
}

// a, bを結ぶ直線と三角形の交差判定を行う
bool is_intersected_line_triangle(Vec2 a, Vec2 b, Vec2 p, Vec2 q, Vec2 r)
{
    // abを結ぶ直線と線分pq, abを結ぶ直線と線分qr, abを結ぶ直線と線分rpについてそれぞれ交差判定を行う
    bool c1 = is_intersected_lines(a, b, p, q);
    bool c2 = is_intersected_lines(a, b, q, r);
    bool c3 = is_intersected_lines(a, b, r, p);

    return (c1 || c2 || c3);
}

int main()
{
    // a, bは直線の通る2点、p, q, rは三角形の通る3点
    double a_x, a_y, b_x, b_y, p_x, p_y, q_x, q_y, r_x, r_y;
    cout << "直線を通る点(1点目)のx座標を指定せよ: ";
    cin >> a_x;
    cout << "直線を通る点(1点目)のy座標を指定せよ: ";
    cin >> a_y;
    cout << "直線を通る点(2点目)のx座標を指定せよ: ";
    cin >> b_x;
    cout << "直線を通る点(2点目)のy座標を指定せよ: ";
    cin >> b_y;
    cout << "三角形の端点(1点目)のx座標を指定せよ: ";
    cin >> p_x;
    cout << "三角形の端点(1点目)のy座標を指定せよ: ";
    cin >> p_y;
    cout << "三角形の端点(2点目)のx座標を指定せよ: ";
    cin >> q_x;
    cout << "三角形の端点(2点目)のy座標を指定せよ: ";
    cin >> q_y;
    cout << "三角形の端点(3点目)のx座標を指定せよ: ";
    cin >> r_x;
    cout << "三角形の端点(3点目)のy座標を指定せよ: ";
    cin >> r_y;

    Vec2 a(a_x, a_y), b(b_x, b_y), p(p_x, p_y), q(q_x, q_y), r(r_x, r_y);

    if(is_intersected_line_triangle(a, b, p, q, r))
    {
        cout << "直線と三角形は交差しています" << endl;
    }
    else
    {
        cout << "直線と三角形は交差していません" << endl;
    }
}