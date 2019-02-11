#include <iostream>
// #include "practice.h"

int main()
{
    int num = 3;
    std::cout << num << "\n";
    num += 5;
    std::cout << num << "\n";
    num *= 5;
    std::cout << num << "\n";
    num /= 4;
    std::cout << num << "\n";
    num %= 8;
    std::cout << num << "\n";

    bool is_monday = true;
    is_monday ^= is_monday;
    std::cout << "明日は月曜日:" << is_monday << "\n";
}

