//
// Created by ak on 7/4/23.
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
    int n, m;
    cin>>n>>m;
    vector<ll> k(n);cin(k);
    sort(all(k));

    for(int i=0;i<m;i++){
        ll a, b, c; cin>>a>>b>>c;
        int j= lower_bound(all(k), b)-k.begin();
        if(j<n and pow(b-k[j], 2)<4*a*c){
            cout<<"YES\n"<<k[j]<<el;
        }else if(j>0 and pow(b-k[j-1], 2)<4*a*c){
            cout<<"YES\n"<<k[j-1]<<el;
        }else cout<<"NO\n";


    }

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
