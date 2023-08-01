//
// Created by ak on 7/30/23.
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
const int N=300;

void solve(){
    int n, m;
    while(cin>>n) {
        if(n==0)break;
        cin>>m;
        vector<int> adj[N];
        for (int i = 1; i <= m; i++) {
                int u, v; cin>>u>>v;
                adj[v].emplace_back(u);
                adj[u].emplace_back(v);
        }
        queue<int> q;
        vector<int> color(n, -1);
        q.emplace(0);
        color[0]=1;
        bool ok=true;
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            for(int child: adj[cur]){
                if(color[child]==-1){
                    color[child]=1-color[cur];
                    q.push(child);
                }else{
                    if(color[child]==color[cur]){
                        ok=false;
                        break;
                    }
                }
            }
            if(!ok)break;
        }
        cout<<(ok?"BICOLORABLE.":"NOT BICOLORABLE.");
        cout<<el;
    }

}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//    cout<<6*24;
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

