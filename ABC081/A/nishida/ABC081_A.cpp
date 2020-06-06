// https://atcoder.jp/contests/abc081/tasks/abc081_a
#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    string s;
    cin >> s;

    int cont = 0;
    // 出力
    for(int ct = 0; ct < s.size(); ct++)
    {
        if(s[ct] == '1')
        {
            cont++;
        }
    }
    cout << cont;
    
    return 0;
}
