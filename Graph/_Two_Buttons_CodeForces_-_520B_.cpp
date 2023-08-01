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
const int N=1e5;
//void solve(){
//    int n, m; cin>>n>>m;
//    if(n>=m)return void(cout<<n-m);
//    int ans=0;
//    queue<int> q;
//    q.push(n);
//    vector<bool> vis(N, false);
//    vis[0]=true;
//    while(!q.empty()){
//        int sz=q.size();
//        ans++;
//        while(sz--){
//            int node = q.front();
//            q.pop();
//            int child1 = 0, child2 = 0;
//            if(node-1>0)child2 = node - 1;
//            if(node<m)child1 = node * 2;
////            cout << child1 << " " << child2 << " ";
//            if (child1 == m or child2 == m)
//                return void(cout << ans);
//            if (!vis[child1])q.emplace(child1);
//            if (!vis[child2])q.emplace(child2);
//            vis[child1] = vis[child2] = true;
//        }
////        cout<<el;
//    }
//
//}
void solve(){
    int n, m;cin>>n>>m;
    int op=0;
    while(m>n)op+=1+(m&1), m=(m+1)/2;
    cout<<n-m+op;

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

