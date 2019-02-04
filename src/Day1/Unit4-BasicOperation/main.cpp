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

// int main()
// {
//     double height, weight;
//     double bmi;

//     std::cout << "身長を入力してください\n";
//     std::cin >> height;
//     std::cout << "体重を入力してください\n";
//     std::cin >> weight;

//     std::cout << "あなたの身長は " << height << " cmです\n";
//     std::cout << "あなたの体重は " << weight << " kgです\n";

//     bmi = weight * 10000 / (height * height);
//     std::cout << "あなたのBMIは " << bmi << " です\n";
// }

// int main()
// {
//     practice();
// }