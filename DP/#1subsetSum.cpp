//
// Created by ahmed-kashkoush on 1/21/23.
//
// والله يابني مانا عارف ادينا بنهبد
// كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d, sizeof(v))
#define all(s) s.begin(), s.end()
#define cin(v)        \
    for (auto &i : v) \
    cin >> i
#define cout(v)      \
    for (auto i : v) \
    cout << i << " "
using namespace std;

void judge();

void tc();

const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int n;
vector<int> arr;
int dp[505][2005];
bool sub(int i, int rem)
{
    if (i > n)
        return false;
    if (rem == 0)
        return true;
    int &ret = dp[i][rem];
    if (ret != -1)
        return (ret != 0);
    ret = 0;
    ret = ret + sub(i + 1, rem); // leave
    if (rem - arr[i] >= 0)
        ret = ret + sub(i + 1, rem - arr[i]);
    return ret = (ret != 0);
}
bool sub2(int i = 0, int sum = 0)
{
    if (i > n)
        return sum == 0;
    //    int &ret=dp[i][sum];
    //    if(ret!=-1)return ret;
    int ret = 0;
    ret = (sub2(i + 1, sum + arr[i]) || sub2(i + 1, sum - arr[i]));
    return ret;
}

int main()
{
    judge();
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> n >> m;
        memset(dp, -1, sizeof(dp));
        arr = vector<int>(n + 10);
        ll x = 0;
        for (int i = 1; i <= n; i++)
            cin >> arr[i], x += arr[i];
        if ((x & 1))
            cout << "False\n";
        cout << (sub(1, 0) ? "True\n" : "False\n");
        //        for(int i=0;i<=n;i++){
        //            for(int j=0;j<=m;j++){
        //                if(i==0||j==0)
        //                    dp[i][j]=0;
        //                else if(j+arr[i]<=m)
        //                    dp[i][j]=(dp[i-1][j]==1)||(j+arr[i]==m);
        //                else{
        //                    dp[i][j]=(dp[i-1][j]==1);
        //                }
        //            }
    }
    //        cout<<dp[n][m];

    //    }

    return 0;
}

void judge()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
