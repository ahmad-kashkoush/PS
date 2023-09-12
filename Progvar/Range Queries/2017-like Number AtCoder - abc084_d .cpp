//
// Created by ak on 9/5/23.
//https://vjudge.net/contest/579150#problem/L
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
const int N=1e5+10;
bool Prime[N];
int Pre[N+1];
void sieve(){
    reset(Prime, true);
    Prime[0]=false, Prime[1]=false;
    for(int i=2;i<N;i++){
        if(!Prime[i])continue;
        for(ll j=(ll)i*i;j<N;j+=i)Prime[j]=false;
    }
    Pre[0]=0;
    for(int i=1;i<N;i++)
        Pre[i]=Pre[i-1]+(Prime[i] and Prime[(i+1)/2] and (i&1));

}
void solve(){
    int q; cin>>q;

    while(q--){
        int l, r; cin>>l>>r;
        cout<<Pre[r]-Pre[l-1]<<el;
    }
}
int main() {
    judge();
    sieve();
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
