#include <iostream>
#include <set>
using namespace std;

int main()
{
    // 宣言、初期化
    set<int> st; // 宣言
    set<int> st_2{3, 1, 4}; // データを指定して初期化

    // 値の参照
    auto itr = st_2.begin(); // 先頭の要素のiteratorを取得
    cout << *itr << endl;
    cout << "全要素を表示" << endl;
    for(auto itr = st_2.begin(); itr != st_2.end(); ++itr)
    {
        std::cout << *itr << endl;
    }

    // データの追加
    st_2.insert(2); // 2を要素として追加
    st_2.insert(3); // 既にあるものは無視される
    cout << "全要素を表示" << endl;
    for(auto itr = st_2.begin(); itr != st_2.end(); ++itr)
    {
        std::cout << *itr << endl;
    }

    // データの削除
    auto c = st_2.erase(3); // 3を削除、3は要素として存在するので1が帰る
    c = st_2.erase(3); // 3を削除、3はもう要素として存在しないので0が帰る
    st_2.erase(st_2.begin()); // iteratorを使用して最初の要素を削除
    cout << "全要素を表示" << endl;
    for(auto itr = st_2.begin(); itr != st_2.end(); ++itr)
    {
        std::cout << *itr << endl;
    }

    // データの検索
    auto itr_2 = st_2.find(2); // keyが設定されていれば対応するiteratorが、設定されていなければend()が帰る
    cout << "検索結果: ";
    if(itr_2 != st_2.end())
    {
        cout << "存在します" << endl;
    }
    else
    {
        cout << "存在しません" << endl;
    }

}