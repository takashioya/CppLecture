#include <iostream>

int main()
{
    int num;

    std::cout << "表示する回数を入力してください\n";
    std::cin >> num;
    for (int i = 0; i < num; ++i)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    int i = 0;
    while (i < num)
    {
        std::cout << i++ << " ";
        // std::cout << ++i << " ";
    }
    std::cout << "\n";

    // 素数判定
}

// 素数判定
// int main()
// {
//   int num;
//   bool isPrime = true;
//   std::cout << "2から1000までの数字を入力してください\n";
// ​
//   std::cin >> num;
// ​
//   if (num <= 1 || num > 1000)
//   {
//     std::cout << "有効範囲外です\n";
//   }
//   else
//   {
//     for (int i = 2; i < num; ++i)
//     {
//       if (num % i == 0)
//       {
//         isPrime = false;
//       }
//     }
// ​
//     if (isPrime)
//     {
//       std::cout << "素数です\n";
//     }
//     else
//     {
//       std::cout << "素数ではありません\n";
// ​
//     }
//   }
// }

// int main()
// {
//     constexpr int NINE = 9;

//     for(int i = 0; i < NINE; ++i)
//     {
//         for(int j = 0; j < NINE; ++j)
//         {
//             std::cout.width(3);
// 	        std::cout.fill(' ');
//             std::cout << (i + 1) * (j + 1) << " ";
//         }
//         std::cout << "\n";
//     }
//     std::cout << "\n";
// }
