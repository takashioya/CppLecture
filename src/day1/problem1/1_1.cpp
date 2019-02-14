#include <iostream>

bool is_satisfied(int x, int y){
    int left = 10 * (x + 6) - (7 - 8 * y);
    int right = 699;
    if(left == right)
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
    for(int i = 1 ; i <= 100; i++)
    {
        for(int j = 1; j <= 100; j++)
        {
            if(is_satisfied(i, j))
            {
                std::cout << "x = " << i << " ";
                std::cout << "y = " << j << "\n";
            }
        }
    }
}