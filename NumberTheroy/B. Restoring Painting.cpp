//
// Created by ak on 4/9/23.
//https://codeforces.com/problemset/problem/675/B
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
    int n, a, b, c, d;
    cin>>n>>a>>b>>c>>d;
    ll ans=0;
    for(int m=1;m<=n;m++){
        int  z= m+a-d;
        int j=z+b-c;
        int w=m+b-c;
        if(w<=n and w>=1 and j<=n and j>=1 and z<=n and z>=1)
            ans++;
    }
    cout<<(ll)ans*n;


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
    1. rushed to solution
        ** Fix** try for the problem at least 40 minutes and increase gradually
 */
