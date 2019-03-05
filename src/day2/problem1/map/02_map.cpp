#include <iostream>
#include <map>
using namespace std;

int main()
{
    // 宣言
    map<char, int> mp; 

    // valueの設定、参照
    mp['a'] = 4; // valueの設定
    mp['b'] = 5;
    cout << mp['a'] << endl; // 値の参照
    mp['a'] = 3; // valueの上書き
    cout << mp['a'] << endl;
    cout << "全要素の表示" << endl;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) // 全要素の表示
    {
        cout << "key = " << itr->first << ", value = " << itr->second << endl;
    }

    // keyの検索
    auto itr = mp.find('a'); // keyが設定されていれば対応するiteratorが、設定されていなければend()が帰る
    cout << "検索結果" << endl;
    cout << "key = " << itr->first << ", value = " << itr->second << endl;

    // 要素の削除
    mp.erase('a'); // keyを指定して削除
    mp.erase(mp.begin()); // iteratorを指定して削除
    cout << "全要素の表示" << endl;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) // 全要素の表示
    {
        cout << "key = " << itr->first << ", value = " << itr->second << endl;
    }

}