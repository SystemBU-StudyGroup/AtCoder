// https://atcoder.jp/contests/abc086/tasks/abc086_a
#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    int a,b;
    cin >> a >> b;

    // 出力
    if (((a * b) % 2) == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    
    return 0;
}
