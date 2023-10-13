//
// Created by ahmedkashkoush on 9/19/23.
//https://codeforces.com/problemset/problem/152/C
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
ll mul(ll a, ll b){
    return  ( (a%mod)*(b%mod) )%mod;
}
void solve(){
    int n, m; cin>>n>>m;
    vector<set<char>> st(m);
    for(int i=0;i<n;i++){
        string s; cin>>s;
        for(int j=0;j<m;j++)
            st[j].emplace(s[j]);

    }
    ll ans=1;
    for(auto i:st){
//        cout<<ans<<el;
        ans=mul(ans, (ll)i.size());
        cout<<i.size()-1<<" ";
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
