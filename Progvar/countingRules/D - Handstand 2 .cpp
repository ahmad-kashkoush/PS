//
// Created by ahmedkashkoush on 9/20/23.
//https://atcoder.jp/contests/abc152/tasks/abc152_d
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
    // first digit : 12 => 1 is the first
    // last digit : 12 => 2 is the last
    ll ans=0;
    map<pair<int, int>, int> mp;
    for(int i=1;i<=n;i++){
       string num=to_string(i);
       int finish=num[0]-'0';
       int start=num.back()-'0';
       mp[{start, finish}]++;
    }
    for(auto it:mp){
        auto [start, finish]=it.first;
        ans+=mp[{start, finish}]*mp[{finish, start}];
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
