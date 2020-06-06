// https://atcoder.jp/contests/abc083/tasks/abc083_b
#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    int N,A,B;
    cin >> N >> A >> B;

    int ans = 0;

    // 出力
    for (int ct = 1; ct <= N; ct++)
    {
        int sum = 0;
        sum += (ct % 10);
        sum += ((ct / 10) % 10); 
        sum += ((ct / 100) % 10); 
        sum += ((ct / 1000) % 10); 

        if ((A <= sum) && (sum <= B))
        {
            ans += ct;
        }
    }

    cout << ans;

    return 0;
}
