#include <iostream>
// #include "practice.h"

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

    if(bmi < 18.5)
    {
        std::cout << "痩せすぎです\n";
    }
    else if(bmi < 25)
    {
        if(bmi == 22)
        {
            std::cout << "The 標準体型\n";
        }
        else
        {
            std::cout << "普通体型です\n";            
        }
    }
    else 
    {
        std::cout << "肥満です\n";        
    }
}

// int main()
// {
//     // bool の変数名は is, has, canなど, 判別がしやすい動詞から始めよう！
//     bool has_iPhone = true; 

//     if(has_iPhone)
//     {
//         std::cout << "iPhone勢じゃん\n";
//     }
//     else 
//     {
//         std::cout << "なかーま\n";        
//     }
// }

// int main()
// {
//     int num = 3;
//     switch (num)
//     {
//         case 0: // int, char, enum
//             std::cout << "日曜日です\n";
//             break;
//         case 1:
//             std::cout << "月曜日です\n";
//             break;
//         case 2:
//             std::cout << "火曜日です\n";
//             break;
//         case 3:
//             std::cout << "水曜日です\n";
//             break;
//         case 4:
//             std::cout << "木曜日です\n";
//             break;
//         case 5:
//             std::cout << "金曜日です\n";
//             break;
//         case 6:
//             std::cout << "土曜日です\n";
//             break;
//         default:
//             std::cout << "曜日が正しく入力されませんでした\n";
//             break;
//     }
// }

// int main()
// {
//     practice();
// }
