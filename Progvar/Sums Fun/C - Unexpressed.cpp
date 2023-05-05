//
// Created by ak on 4/28/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
using namespace std;
void judge();

void solve(){
    ll n; cin>>n;
    set<ll> st;
    for(ll a=2;a*a<=n;a++){
      ll x=a*a;
      while(x<=n){
          st.emplace(x);
          x*=a;
      }
    }
   cout<<n-st.size()<<el;

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
