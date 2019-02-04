#include <iostream>
#include "practice.h"

void practice()
{
    int num;
    std::cout << "整数を入力してね\n";
    std::cin >> num;
    if(num % 2 == 0)
    {
        std::cout << "偶数です\n";
    }
    else
    {
        std::cout << "奇数です\n";
    }
}