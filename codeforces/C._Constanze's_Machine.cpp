//
// Created by ahmed-kashkoush on 2/23/23.
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
void judge();void tc();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve() {
    string s;cin>>s;
    if(s.find("m")!=-1 or s.find("w")!=-1){
        cout<<"0\n";
        return;
    }

    ll dp[(int)s.size()+1];
    memset(dp, 0, sizeof(dp));
    dp[0]=1;
    dp[1]=(s[1]==s[0] and (s[0]=='u' or s[1]=='n')?2:1);
    for(int i=2;i<s.size();i++){
        if(s[i]==s[i-1] and (s[i]=='u' or s[i]=='n'))
            dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
        else
            dp[i]=dp[i-1]%mod;
    }
    cout<<dp[(int)s.size()-1]%mod;
}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}
void tc(){
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        cout<<el;
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