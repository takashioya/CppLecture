#include <iostream>

int get_years_to_take(double percent, double thresh_rate)
{
    double rate = 1;
    int years = 0;
    while(rate < thresh_rate)
    {
        rate *= 1 + (percent * 0.01);
        years += 1;
    }
    return years;
}

int main()
{
    double percent;
    double thresh_rate = 2;
    std::cout << "年利を入力してください\n";
    std::cin >> percent;

    int years = get_years_to_take(percent, thresh_rate);
    std::cout << thresh_rate << "倍になるまでに" << years << "年かかります\n";
}