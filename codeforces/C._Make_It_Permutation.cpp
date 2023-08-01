//
// Created by ak on 5/7/23.
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
void solve(){
    ll n, c, d; cin>>n>>c>>d;
    vector<ll> a;
    set<ll> vis;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll b; cin>>b;
        if(!vis.count(b))a.emplace_back(b);
        else                ans+=c;
        vis.emplace(b);
    }
    sort(all(a));
    ll opt=(int)a.size()*c+d;
    for(ll i=1;i<=a.size();i++){
        opt=min(opt, (a[i-1]-i)*d+(((ll)a.size()-i)*c));

    }

    cout<<opt+ans<<el;
}
int main() {
    judge();
    int t=1;
    cin>>t;
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

