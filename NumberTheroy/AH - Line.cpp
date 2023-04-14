//
// Created by ak on 4/9/23.
//https://codeforces.com/problemset/problem/7/C
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
ll extendedGCD(ll a, ll b, ll &x, ll &y){
    if(!b){
        x=1;
        y=0;
        return a;
    }
    ll x1, y1;
    ll g= extendedGCD(b, a%b, x1, y1);
     x=y1;
     y=x1-(a/b)*y1;
    return g;
}
void solve(){
    ll a, b, c, x, y;
    cin>>a>>b>>c;
    ll gcd= extendedGCD(a, b, x, y);
    c=-c;
    if(c%gcd==0)
        cout<<c*x/gcd<<" "<<c*y/gcd;
    else
        cout<<"-1";


}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
        cout<<el;
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
 ax+by+c=0;
 ax+by=-c;
 ax1+by1=gcd(a, b), x=x1, y=y1;

 ?--> c
 x1--> gcd
 x1*c/gcd

 c%gcd!=0---> -1

 */
