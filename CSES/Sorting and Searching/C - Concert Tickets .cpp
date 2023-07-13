//
// Created by ak on 7/6/23.
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
    int n, m; cin>>n>>m;
    set<pair<int, int>> h;
     for(int i=0;i<n;i++){
         int t; cin>>t;
         h.emplace(-t, i);
     }
     for(int i=0;i<m;i++){
         int t; cin>>t;
         auto smallest=h.lower_bound({-t, -1});
         if(smallest==h.end())cout<<-1<<el;
         else{
             cout<<-smallest->first <<el;
             h.erase(smallest);
         }
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
