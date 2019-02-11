#include <iostream>

int main()
{
    double height, weight;
    double bmi;

    std::cout << "身長を入力してください\n";
    std::cin >> height;
    std::cout << "体重を入力してください\n";
    std::cin >> weight;

    std::cout << "あなたの身長は " << height << " cmです\n";
    std::cout << "あなたの体重は " << weight << " kgです\n";

    bmi = weight * 10000 / (height * height);
    std::cout << "あなたのBMIは " << bmi << " です\n";
}
