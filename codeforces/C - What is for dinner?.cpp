//
// Created by ak on 6/29/23.
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
    int n, m, k;
    cin>>n>>m>>k;
    int ans=0;
    map<int, int> viability;//[row, viability]
    for(int i=0;i<n;i++){
        int r, c;
        cin>>r>>c;
        if(viability.count(r))
            viability[r]=min(c, viability[r]);
        else
            viability[r]=c;
    }
    for(auto [row, v]: viability){
       ans=min(ans+v, k);
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
