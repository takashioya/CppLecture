#include <iostream>
#include <cmath>
using namespace std;

bool is_crossed(double c_x_1, double c_y_1, double r_1, 
                double c_x_2, double c_y_2, double r_2)
{
    double distance = sqrt((c_x_1 - c_x_2) * (c_x_1 - c_x_2) + 
                           (c_y_1 - c_y_2) * (c_y_1 - c_y_2));
    if(distance <= r_1 + r_2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    double c_x_1, c_y_1, r_1, c_x_2, c_y_2, r_2;
    cout << "一個目の円の中心のx座標を入力せよ\n";
    cin >> c_x_1;
    cout << "一個目の円の中心のy座標を入力せよ\n";
    cin >> c_y_1;
    cout << "一個目の円の半径を入力せよ\n";
    cin >> r_1;
    cout << "二個目の円の中心のx座標を入力せよ\n";
    cin >> c_x_2;
    cout << "二個目の円の中心のy座標を入力せよ\n";
    cin >> c_y_2;
    cout << "二個目の円の半径を入力せよ\n";
    cin >> r_2;

    bool cross_flag = is_crossed(c_x_1, c_y_1, r_1, c_x_2, c_y_2, r_2);
    if (cross_flag)
    {
        cout << "二つの円は交差しています\n";
    }
    else
    {
        cout << "二つの円は交差していません\n";
    }
}