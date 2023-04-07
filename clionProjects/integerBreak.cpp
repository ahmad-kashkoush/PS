//
// Created by ak on 1/27/2023.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;

void judge();

void tc();
int dp[1000];
int integerBreak(int n){
    if(n==0)
        return 1;
    int &ret=dp[n];
    if(ret!=-1)return ret;
    ret=0;
    for(int i=1;i<=n;i++){
        int a1=n-i;
         ret=max(ret, a1*integerBreak(i));
         ret=max(ret, i*integerBreak(a1));
         ret=max(ret, a1*i);
    }
    return ret;
}


void solve() {
    int n; cin>>n;
    reset(dp, -1);
    if(n==0)cout<<0;
    else
     cout<<"Maximum Integer Break is:"<<integerBreak(n)<<" \n";

}

int main() {
    judge();
    tc();
//    solve();
    return 0;
}

void tc() {
    int t = 1;
//      cin>>t;
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