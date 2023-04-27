//
// Created by ak on 4/27/23.
//https://codeforces.com/problemset/problem/990/D
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
    int n, a, b;cin>>n>>a>>b;
    int adj[n+1][n+1];
    reset(adj, 0);
    if(min(a,b)!=1)return void(cout<<"NO\n");
    if(a==1 and b==1){
        if(n==2 or n==3)return void(cout<<"NO\n");
        for(int i=1;i<n;i++)
            adj[i][i+1]=adj[i+1][i]=1;// 1 connected component
    }else{
        bool x=true;
        if(b>a)x=false, swap(b, a);
        for(int i=2;i<=n-a+1;i++)
            adj[i][1]=adj[1][i]=1;
        if(!x){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==j)continue;
                    adj[i][j] =!adj[i][j];
                }
            }
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= n; j++)
            cout << adj[i][j];
        cout<<el;
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

