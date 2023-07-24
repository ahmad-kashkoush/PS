//
// Created by ak on 7/13/23.
//

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define el '\n'
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
void solve(){
    int n, a, b;
    cin>>n>>a>>b;
    int adj[n+1][n+1];
    reset(adj, 0);
    if(min(a, b)!=1)return void(cout<<"NO\n");
    if(b==1 and a==1){
        if(n==2 or n==3)return void(cout<<"NO\n");
        for(int i=1;i<n;i++)
            adj[i][i+1]=adj[i+1][i]=1;
    }else{
        bool inverted=false;
        if(b>a)swap(a, b), inverted=true;
        for(int i=2;i<=n-a+1;i++){
            adj[1][i]=adj[i][1]=1;
        }
        if(inverted){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==j)continue;
                    adj[i][j]=!adj[i][j];
                }
            }
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adj[i][j]<<"";
        }
        cout<<el;
    }
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//        cout<<el;
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

