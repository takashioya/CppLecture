#include <iostream>
using namespace std;

/* エラーを吐くためコメントアウト
void swap_1(const int &i, const int &j) // const int &hoge
{
    int tmp = i;
    i = j; 
    j = tmp;
    cout << "&i: " << &i << ", &j: " << &j << endl;
}

void swap_2(const int *i_ptr, const int *j_ptr) // int *const hoge
{
    if(!i_ptr || !j_ptr)
    {
        return;
    }
    int tmp = *i_ptr;
    *i_ptr = *j_ptr;
    *j_ptr = tmp;
}
*/

void swap_3(int *const i_ptr, int *const j_ptr) // int *const hoge
{
    if(!i_ptr || !j_ptr)
    {
        return;
    }
    int tmp = *i_ptr;
    *i_ptr = *j_ptr;
    *j_ptr = tmp;
}

int main()
{
    int x = 5;
    int y = 3;
    /* エラーを吐くのでコメントアウト
    swap_1(x, y)
    swap_2(&x, &y)
    */
    swap_3(&x, &y); // これはエラーを吐かない

    /*
    理由の説明:

    swap_1の書き方(const int &hoge)だと、hogeは変更不可能であるため、
    i = j; 
    j = tmp;
    の部分がアウト。
    
    swap_2の書き方(const int *hoge)だと、ポインタ自体は変更可能だが、ポインタの指す値は変更不能なので、
    *i_ptr = *j_ptr;
    *j_ptr = tmp;
    の部分がアウト。

    swap_3の書き方(int *const hoge)だと、ポインタ自体は変更不能だが、ポインタの指す値は変更可能なので、
    *i_ptr = *j_ptr;
    *j_ptr = tmp;
    の部分はOK。

    */
   
    cout << "x= " << x << ", y= " << y << endl;

}