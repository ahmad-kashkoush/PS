//
// Created by ak on 8/17/23.
//https://codeforces.com/contest/1858/problem/B
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
    int n, m, d ; cin>>n>>m>>d;
    vector<int> s;
    s.emplace_back(1);
    bool one=false;
    for(int i=1;i<=m;i++) {
        int x; cin >> x;
        one = (one or x == 1), s.emplace_back(x);
    }
    s.emplace_back(n+1);
    ll noRemove=0;
//    cout(s);
//    cout<<el;
    sort(all(s));
    s.erase(unique(s.begin(), s.end()), s.end());

    for(int i=0;i+1<s.size();i++){
        noRemove+=(s[i+1]-s[i]-1)/d;
    }
    noRemove+=(int)s.size()-1;
//    Lets Start Update sum on every trial;
    ll cnt=0, mn=LONG_LONG_MAX;
    for(int i=1;i<(int)s.size()-1;i++) {
        ll cur = (s[i + 1] - s[i - 1] - 1) / d;
        cur -= (s[i + 1] - s[i] - 1) / d;
        cur -= (s[i] - s[i - 1] - 1) / d;
        cur--;
        if (mn > cur) {
            mn = cur;
            cnt = 1;
        }
       else if (mn == cur)cnt++;
    }
    if(one and mn==0)cnt++;
    cout<<mn+noRemove<<" "<<cnt<<el;
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
