//
// Created by ak on 8/18/23.
//
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
ll sub(ll a, ll b){
    return (a-b+mod)%mod;
}
void solve(){
    int x, y; cin>>x>>y;
    ll a[6];
    a[0]=(x+mod)%mod, a[1]=(y+mod)%mod;
    for(int i=2;i<6;i++)
        a[i]=sub(a[i-1], a[i-2]);
//    cout(a);
//    cout<<el;
    int n; cin>>n;
    n--;
    cout<<a[n%6];
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

