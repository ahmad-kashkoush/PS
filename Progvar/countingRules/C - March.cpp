//
// Created by ahmedkashkoush on 9/20/23.
//https://atcoder.jp/contests/abc089/tasks/abc089_c
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
void solve(){
    int n;cin>>n;
    ll frq[5];
    reset(frq, 0);
    string test="MARCH";
    for(int i=0;i<n;i++){
        string s; cin>>s;
       int id=test.find(string(1, s[0]));
       if(id==-1)continue;
       frq[id]++;
    }
    ll ans=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++)
                if(frq[i] and frq[j] and frq[k])ans+=frq[i]*frq[j]*frq[k];
        }
    }
    cout<<ans;
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
    }

    return 0;
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

