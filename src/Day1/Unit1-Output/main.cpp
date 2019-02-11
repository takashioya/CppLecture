#include <iostream>

int main()
{
    std::cout << "Hello World\n";
    std::cout << 2019 << "\n";
    // 四則演算
    std::cout << 2019 + 1 << "\n";
    std::cout << 2019 - 9 << "\n";
    std::cout << 2019 * 2 << "\n";

    std::cout << 2019 / 5 << "\n";
    std::cout << 2019.0 / 5.0 << "\n";

    // BAD
    // std::cout << 2019 / 0 << "\n";

    // 括弧の計算
    std::cout << (2019 + 1) / 5 << "\n";

    // 剰余
    std::cout << 2015 % 5 << "\n";

    // 2147483648 +- で 2^32 bit = (2^8)^4 = 4byte
    std::cout << sizeof(int) << "\n";
    std::cout << "intの限界数値:" << 256 * 256 * 256 * 256 << "\n";

    return 0;
}