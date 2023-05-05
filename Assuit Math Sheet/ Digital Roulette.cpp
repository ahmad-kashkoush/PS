//
// Created by ak on 4/11/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
using namespace std;
void judge();
ll mul(ll a, ll b, ll m){
    return ((a%m)*(b%m))%m;
}
ll add(ll a, ll b, ll c){
    return ((a%c)+(b%c))%c;
}

int main() {
    judge();
    while(true){
       ll n, m; cin>>n>>m;
        if(n==0 and m==0)break;
       ll k;cin>>k;
       ll arr[k+2];
       for(int i=0;i<=k;i++){
           cin>>arr[i];
       }

       set<ll> st;
       // p(j)
       for(int j=0;j<=m;j++){
           ll pow=1;
           ll ans=0;
          for(int i=0;i<=k;i++){
              ans=add(ans,mul(arr[i], pow, n+1),n+1);
             pow=mul(pow, j, n+1);

          }
          st.insert(ans%(n+1));

       }
       cout<<st.size()<<el;
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

