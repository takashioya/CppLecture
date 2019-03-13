/* バブルソートについて軽い説明:
バブルソートは、隣り合う要素を順に比較して交換を行うアルゴリズムである。
平均計算時間がO(n^2), 最悪計算時間がO(n^2)と遅いが、実装は容易であるためたまに使われることもある。
また、データの数が小さい時はクイックソート等と比べて高速であることが知られている。
バブルソートの実装例は下記に示した。
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