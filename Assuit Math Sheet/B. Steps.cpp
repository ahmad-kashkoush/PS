//
// Created by ak on 4/8/23.
//https://codeforces.com/problemset/problem/152/B
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
bool valid(ll n, ll m, ll x, ll y){
    return (x>=1 and x<=n and y>=1 and y<=m);
}
void solve(){
    ll n, m, x, y, k;
    cin>>n>>m>>x>>y>>k;//
    ll steps=0;
    while(k--){
        ll dx, dy;cin>>dx>>dy;//
        ll moves=0;//
        ll l=0, r=2e9;
        while(l<=r){
            ll mid=l+(r-l)/2;//
            if(valid(n, m, x+dx*mid, y+dy*mid))
                moves=mid, l=mid+1;
            else r=mid-1;

        }
        x+=dx*moves;
        y+=dy*moves;
        steps+=moves;

    }
    cout<<steps;



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
/*
 Mistakes
 1. Jumping to easier solution despite the fact that binary search will work
 2. depending on background and assumptions
 */

