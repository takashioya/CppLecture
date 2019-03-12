#include <iostream>
#include <array>
using namespace std;

constexpr int SIZE = 5;

void swap(int *i_ptr, int *j_ptr)
{
    if(!i_ptr || !j_ptr)
    {
        return;
    }
    int tmp = *i_ptr;
    *i_ptr = *j_ptr;
    *j_ptr = tmp;
}

void bubbleSort(int *arr, int &step)
{
    for (int i = SIZE - 1; i > 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
        step += 1;

        if(arr[j] > arr[j + 1])
        {
            swap(&arr[j], &arr[j + 1]);
        }
        
        }
    }
}

int main()
{
    int *array = new int[SIZE];
    int step = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        cout << i + 1 << "番目の値を入力してください" << endl;
        cin >> array[i];
    }

    bubbleSort(array, step);

    cout << "ソートした結果: ";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << " ";
    }

    cout << endl;
    cout << "step数: " << step << endl;
    
    delete[] array;
}