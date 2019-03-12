#include <iostream>
#include <array>
using namespace std;
constexpr int SIZE = 8;

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

void QuickSort(int *arr, int left, int right)
{
    int i = left;
    int j = right;
    int center = (left + right)/2;
    int pivot = arr[center];

    while(1)
    {
        while(arr[i] < pivot)
        { 
            i++;
        }
        while(pivot < arr[j])
        {
            j--;
        }
        if(i >= j)
        {
            break;
        }

        swap(&arr[i], &arr[j]);
        i++;
        j--;
    }
    if (i - left >= 2) //左側の配列の数が1つになったら計算終了
    {
        QuickSort(arr, left, i - 1);
    }
    if (right - j >= 2) //右側の配列の数が一つになったら計算終了
    {
        QuickSort(arr, j + 1, right);
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

    QuickSort(array, 0, SIZE);

    cout << "ソートした結果: ";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << " ";
    }

    cout << endl;
    
    delete[] array;
}