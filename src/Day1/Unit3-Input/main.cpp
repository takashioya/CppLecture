#include <iostream>

int main()
{
    double height, weight;

    std::cout << "身長を入力してください\n";
    std::cin >> height;
    std::cout << "体重を入力してください\n";
    std::cin >> weight;

    std::cout << "あなたの身長は " << height << " cmです\n";
    std::cout << "あなたの体重は " << weight << " kgです\n";
}

// int main()
// {
//     char a, b;

//     std::cout << "英数字１文字を入力してください\n";
//     std::cin >> a;

//     std::cout << "あなたが入力した文字は " << a << "です\n";
// }