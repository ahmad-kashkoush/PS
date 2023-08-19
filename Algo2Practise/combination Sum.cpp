//
// Created by ahmed-kashkoush on 2/3/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>

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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int dp[target+1];
    memset(dp, 0, sizeof(dp));
    dp[0]=1;
//    for(int i=0;i<=target;i++){
//        for(auto x:arr){
//            if(x<=i)
//                dp[i]+=dp[i-x];
//        }
//    }
    dp[0]=1;
        for(int i=0;i<=target;i++){
        for(auto x:arr){
            if(i+x<=target)
                dp[i+x]+=dp[i];
        }
    }

    cout<<dp[target]<<el;
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
