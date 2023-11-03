//
// Created by ahmedkashkoush on 10/13/23.
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
    string s; cin>>s;

    char suf[s.size()+1];
    suf[s.size()]='z';
    for(int i=s.size()-1;i>=0;i--)
        suf[i]=min(suf[i+1], s[i]);
    string t;
    for(int i=0;i<s.size() || !t.empty();){
        if(!t.empty() and t.back()<=suf[i]){
            cout<<t.back();
            t.pop_back();
        }else   t+=s[i++];
    }



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

