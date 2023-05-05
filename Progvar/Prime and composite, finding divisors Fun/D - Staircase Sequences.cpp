//
// Created by ak on 4/30/23.
//https://atcoder.jp/contests/abc190/tasks/abc190_d
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
        ll n; cin>>n;
        set<ll> a;// beginning of every sequence will be different
        // N=(i/2)(a+i-1)
        // a=(2N/i-i+1)/2
        // i must be factor of N
        // count differnt a
        n*=2;
        for(int i=1;(ll)i*i<=n;i++){
            if((n)%i==0){
                ll b=n/i-i+1;
                ll tmp=n/i;
                ll c=n/tmp-tmp+1;
                if(!(b&1))a.emplace(b);
                if(!(c&1))a.emplace(c);
            }
        }
        cout<<a.size();
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

