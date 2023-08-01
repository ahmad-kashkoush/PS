//
// Created by ahmed-kashkoush on 3/26/23.
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
    vector<vector<int>> v(n);
    vector<int> winner(n);
    for(int i=0;i<n;i++){
        int sz;cin>>sz;
        v[i].resize(sz);
        for(int j=0;j<sz;j++)
            cin>>v[i][j];
    }
    unordered_map<int, int> mp;
    for(int i=n-1;i>=0;i--){
        bool exist=false;
        for(auto x:v[i]){
            if(!mp[x] and !exist){
                mp[x]=1;
                winner[i]=x;
                exist=true;
            }
            mp[x]=1;
        }
        if(!exist)return void(cout<<"-1");
    }
    cout(winner);

}
int main() {
    judge();
    int t=1;
    cin>>t;
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

