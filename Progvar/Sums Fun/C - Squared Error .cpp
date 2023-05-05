//
// Created by ak on 4/28/23.
//https://atcoder.jp/contests/abc194/tasks/abc194_c
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
    int arr[n];
    ll pre[n+1];
    pre[0]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pre[i+1]=arr[i]+pre[i];
    }
    ll sq=0;
    for(int i=0;i<n;i++)sq+=arr[i]*arr[i];
    ll pair=0;
    for(int i=n-1;i>=0;i--)pair+=arr[i]*pre[i];

    cout<<sq*(n-1)-pair*2;

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

