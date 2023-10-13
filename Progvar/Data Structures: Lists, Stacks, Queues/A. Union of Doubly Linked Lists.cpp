//
// Created by ahmedkashkoush on 10/6/23.
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
    int l[n+1], r[n+1];
    for(int i=1;i<=n;i++){
        int a, b;cin>>a>>b;
        l[i]=a;  r[i]=b;
    }
    // makr components
    int comp=0;
    map<int, pair<int, int>> mp;
    vector<int>vis(n+1, -1);
    for(int i=1;i<=n;i++){
        if(vis[i]!=-1)continue;
        int node=i;
        vis[node]=1;
        int mostLeft=node, mostRight=node;
        int tmp=mostLeft;
        while(tmp!=0){
            mostLeft=tmp;
            vis[tmp]=1;
            tmp=l[tmp];
        }
        tmp=node;
        while(tmp!=0){
            mostRight=tmp;
            vis[tmp]=1;
            tmp=r[tmp];
        }
        mp[comp]={mostLeft, mostRight};
        comp++;
    }
//    cout<<comp<<el;
//    for(int i=0;i<comp;i++){
//        cout<<mp[i].first<<" "<<mp[i].second<<el;
//    }
    for(int i=1;i<comp;i++){
      l[mp[i].first]=mp[i-1].second;
      r[mp[i-1].second]=mp[i].first;
//        cout<<"L: "<<mp[i].first<<" "<<l[mp[i].first]<<el;
//        cout<<"R: "<<mp[i-1].second<<" "<<r[mp[i-1].second]<<el;
//        cout<<"-------------------------------\n";

    }
    for(int i=1;i<=n;i++)cout<<l[i]<<" "<<r[i]<<el;

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
