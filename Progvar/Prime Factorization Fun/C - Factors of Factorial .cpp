//
// Created by ak on 5/5/23.
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
map<int, ll> power;
void P(int x){
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            power[i]++;
            x/=i;
        }
    }
    if(x!=1)power[x]++;
}
ll mul(ll a, ll b){return ( (a%mod)*(b%mod) )%mod;}
void solve(){
    int n; cin>>n;
   ll ans=1;
   for(int i=1;i<=n;i++)P(i);
   for(auto [i, pwr]: power){
       ans=mul(ans, pwr+1);
   }
   cout<<ans<<el;

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

