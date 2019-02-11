#include <iostream>
#include "practice.h"

void practice()
{
    double base, height;
    double area;
    std::cout << "三角形の底辺の長さを入力してね\n";
    std::cin >> base;
    std::cout << "三角形の高さを入力してね\n";
    std::cin >> height;
    
    area = base * height / 2;
    std::cout << "三角形の面積は " << area << " です\n";
}