#include <iostream>

double get_velocity(double m, double F, double t)
{
    return (F/m) * t;
}

int main()
{
    double m, F, t, v;
    std::cout << "質量[kg]を入力してください\n";
    std::cin >> m;
    std::cout << "推進力[N]を入力してください\n";
    std::cin >> F;
    std::cout << "経過時間t[s]を入力してください\n";
    std::cin >> t;
    v = get_velocity(m, F, t);
    std::cout << t << "秒後の速度は、" << v << "[m/s]です。\n";
}