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

void insertSort(int *arr)
{
    int i, j;
    for (int i = 1;  i < SIZE; i++)
    {
        j = i;
        while((j > 0) && (arr[j - 1] > arr[j]))
        {
            swap(&arr[j - 1], &arr[j]);
            j--;
        }
    }
}

int main()
{
    int *array = new int[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        cout << i + 1 << "番目の値を入力してください" << endl;
        cin >> array[i];
    }

    insertSort(array);

    cout << "ソートした結果: ";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    delete[] array;
}