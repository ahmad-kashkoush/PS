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
const int N=1e6;
vector<bool> isPrime(N, true);
vector<ll> sieve(){
    isPrime[0]=false;
    isPrime[1]=false;
    vector<ll> primes;
//    cout<<"H";
    for(ll i=2;i*i<N;i++){
        if(isPrime[i]){
            primes.emplace_back(i);
            for(ll j=i*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    return primes;
}
void solve(){
    vector<ll> primes=sieve();
    int n, m; cin>>n>>m;
    int mat[n][m];
    ll ans=-10;
    for(int i=0;i<n;i++){
        ll cur=0;
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            cur+=*lower_bound(all(primes), mat[i][j])-mat[i][j];
        }
        if(ans==-10)ans=cur;
        else        ans=min(ans, cur);
    }
    for(int j=0;j<m;j++){
        ll cur=0;
        for(int i=0;i<n;i++){
            cur+=*lower_bound(all(primes), mat[i][j])-mat[i][j];
        }
        ans=min(cur, ans);
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
