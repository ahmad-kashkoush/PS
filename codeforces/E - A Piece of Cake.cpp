//
// Created by ak on 7/1/23.
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
ll w, h, n, a, b;
ll p[200001], q[200001];
ll A[200001], B[200001];
void solve() {
    cin >> w >> h;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i] >> q[i];

    cin >> a;

    for (int i = 0; i < a; i++)
        cin >> A[i];

    cin >> b;

    for (int i = 0; i < b; i++)
        cin >> B[i];
    map<pair<ll, ll>,ll> mp;// storberriew on pieces
    A[a]=w, B[b]=h;// values h
    for (int i = 0; i < n; i++) {
        ll x = *lower_bound(A, A + a + 1, p[i]);// first element< p[i]
        ll y = *lower_bound(B, B + b + 1, q[i]);
        mp[{x, y}]++;
    }
//    for(auto [x, y]: mp)
//        cout<<x.first<<" "<<x.second<<" "<<y<<el;
    ll M = 0;
    for (auto [pair, freq]: mp)M = max(M, freq);
    ll m=n;
    if(mp.size()<(a+1)*(b+1))m=0;
    else{
        for(auto [pair,freq]:mp)m=min(m, freq);
    }
    cout<<m<<" "<<M;

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
/* !Mistake #3
   1. didn't specify what to loop on or to search in

 */