#include <iostream>
#include <iomanip>

int main()
{
    int num = 3;
    std::cout << num << "\n";
    num = 5;
    std::cout << num << "\n";

    bool is_monday = true;
    std::cout << "明日は月曜日:" << is_monday << "\n";

    double d_decimal;
    float f_decimal;

    d_decimal = 1.23456789012345;
    f_decimal = 1.23456789012345f;
    std::cout << "double：" << std::setprecision(15) << d_decimal << " \n";
    std::cout << "float ：" << std::setprecision(15) << f_decimal << " \n";
    // 最近のPCでは専ら double 専用の回路が用いられているため、double の方が早く、floatを使うメリットはない
    // ただし、GPUでは主に float 専用の回路が用いられているため、floatの方が早い

    double height, weight;
    height = 168.7;
    weight = 68.2;
    std::cout << "あなたの身長は " << height << " cmです\n";
    std::cout << "あなたの体重は " << weight << " kgです\n";

}
