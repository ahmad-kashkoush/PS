//
// Created by ak on 4/13/23.
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
void solve(){
    int a[2], b[2], f[2];
    cin>>a[0]>>a[1]>>b[0]>>b[1]>>f[0]>>f[1];
    int ans=abs(a[0]-b[0])+abs(a[1]-b[1]);
    if(a[0]>b[0])swap(a[0], b[0]);
    if(a[1]>b[1])swap(a[1], b[1]);
    if(a[0]==f[0] and a[0]==b[0] and  f[1]>a[1] and f[1]<b[1]
    or (a[1]==f[1] and a[1]==b[1] and f[0]>a[0] and f[0]<b[0]) )ans+=2;
    cout<<ans<<el;

}
int main() {
    judge();
    int t=1;
    cin>>t;
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
