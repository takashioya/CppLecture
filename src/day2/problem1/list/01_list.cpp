#include <iostream>
#include <list>
using namespace std;

int main()
{   
    // 宣言・初期化
    list<int> lst; // int型で宣言
    list<int> lst_2(123); // 要素数を指定して宣言
    list<int> lst_3(10, 5); // 要素数10, 全ての値を5として宣言
    list<int> lst_4{4, 6, 5}; // データ列を指定して宣言

    // 参照・代入
    auto itr = lst_4.begin(); // 最初の要素を示すiteratorの取得
    cout << "最初の要素を表示" << endl << *itr << endl; // 最初の要素を表示
    *itr = 9; // 要素の代入
    cout << "全要素を表示" << endl;
    for(auto itr_2 = lst_4.begin(); itr_2 != lst_4.end(); ++itr_2) // 全要素を表示
    {
        cout << *itr_2 << endl;
    }

    // 要素の追加
    lst_4.push_front(11); // データを先頭に追加
    lst_4.push_back(15); // データを末尾に追加
    lst_4.insert(lst_4.begin(), 10); // iteratorを用いた要素のinsert
    cout << "全要素を表示" << endl;
    for(auto itr_2 = lst_4.begin(); itr_2 != lst_4.end(); ++itr_2) // 全要素を表示
    {
        cout << *itr_2 << endl;
    }

    // 要素の削除
    lst_4.pop_front(); // 先頭の要素を削除
    lst_4.pop_back(); // 最後の要素を削除
    lst_4.erase(lst_4.begin()); // iteratorを用いた要素の削除
    cout << "全要素を表示" << endl;
    for(auto itr_2 = lst_4.begin(); itr_2 != lst_4.end(); ++itr_2) // 全要素を表示
    {
        cout << *itr_2 << endl;
    }
}