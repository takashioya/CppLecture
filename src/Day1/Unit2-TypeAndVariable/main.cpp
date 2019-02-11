#include <iostream>

int main()
{
    // 表示だけならstd::cout　よりも printfの方が速いが，変数の表示のさせ方が少し特殊
    // 覚えてしまえばかなり簡単なので紹介
    printf("Hello World\n");

    int num = 3;
    std::cout << num << "\n";
    printf("num = %d \n", num); // 整数を表示させるときは%d

    double x = 0.5;
    std::cout << x << "\n";
    printf("x = %lf \n", x); // doubleの少数を表示させるときは%lf

    std::string words = "Hello World";
    std::cout << words << "\n";
    printf("words = %s \n", words.c_str()); // stringの文字を表示させるときは少し特殊で変数に「.c_str()」をつけた上で%s

    
    double height, weight;

    height = 168.7;
    weight = 68.2;
    std::cout << "あなたの身長は " << height << " cmです\n";
    std::cout << "あなたの体重は " << weight << " kgです\n";
}
