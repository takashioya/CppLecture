/* 挿入ソートについて軽い説明:
挿入ソートは、ソートされたデータ列に対して要素を正しい位置に挿入することを繰り返すことによって
ソートを行うアルゴリズムである。平均計算時間、最悪計算時間はバブルソートと同じく共にO(n^2)で
あり、決して高速なアルゴリズムではない。また、挿入ソートのアルゴリズムはもとのデータがどの程度
既にソートされているかに強く依存する。つまり、もともと殆どソート済みのデータであれば高速だし、
逆にもともとデータが殆ど降順に並び替えられていたとするとかなり低速になる。
挿入ソートの実装例は下記に示した。
*/

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