//
// Created by ak on 9/4/23.
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
    int n; cin>>n;
    int a[n];
    ll pre[n+1];
    pre[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        pre[i+1]=a[i]+pre[i];
    }
    int cnt=0;
    for(int mid=2;mid<=n;mid++){
        cnt+=(pre[n]-pre[mid-1])==(pre[mid-1]);
    }
    cout<<cnt;
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

