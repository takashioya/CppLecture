#include <iostream>

int get_y_times_8(int x)
{
    int y_times_8 = 706 - 10 * (x + 6);
    return y_times_8;
}

int main()
{
    int y, y_times_8;

    for(int x = 1 ; x <= 100; x++)
    {
        // calculate 8 * y
        y_times_8 = get_y_times_8(x);
        
        // check y is integer
        if (y_times_8 % 8 == 0)
        {
            y = y_times_8/8;
            
            // check y is in [1, 100]
            if(y >= 1 && y <= 100)
            {
                std::cout << "x = " << x << " ";
                std::cout << "y = " << y << "\n";
            }
        }
    }
}