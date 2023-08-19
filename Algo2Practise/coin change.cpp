//
// Created by ahmed-kashkoush on 2/3/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
/*
 *
 * 3 5
1 2 5
 5
 - 1 1 1 1 1
 - 2   1  1 1
 - 2   2    1
 -5
 -

 - what's important so far?
    -> sum
    --> arr--> indexs

    1 1 2 1
    1 1 1 1 1
    2 2 1
    5
     0 1 2 3 4 5
   0 1 0 0 0 0 0
   1 1 1 1 1 1 1
  12 1 1 2 2 3 3
 125 1 1 2 2 3 5
 * */
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int mod = 1e9 + 7, OO = INT_MAX;
//const int MAX=;
// int mem[MAX]
void solve() {
    int n, target; cin>>n>>target;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int dp[n+1][target+1];
    for(auto &dp:dp)
        memset(dp, 0, sizeof(dp));

    dp[0][0]=1;
    for(int row=1;row<=n;row++){
        for(int col=0;col<=target;col++){
                if(col==0)
                    dp[row][col]=1;
                else {
                        dp[row][col] = dp[row-1][col] ;
                        if(col-arr[row]>=0)
                            dp[row][col]+=dp[row][col-arr[row]];
                }


        }
    }


    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++)
            cout<<dp[i][j]<<" ";
        cout<<el;
    }






//    cout<<dp[n][target]<<el;
}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}

void tc() {
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        //cout<<el;
    }
}

void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
