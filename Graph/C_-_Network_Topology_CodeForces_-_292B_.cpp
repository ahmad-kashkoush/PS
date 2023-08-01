//
// Created by ak on 7/12/23.
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
const int N=1e5+10;
void solve(){
    int n, m; cin>>n>>m;
    int edges[n];
    reset(edges, 0);
    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        u--, v--;
        edges[u]++, edges[v]++;
    }
    int freq[m+10];
    reset(freq, 0);
    for(int i=0;i<n;i++)
        freq[edges[i]]++;

    // bus
    if(freq[1]==2 and freq[2]==n-2)
        cout<<"bus topology";
    else if(freq[2]==n)
        cout<<"ring topology";
    else if(freq[n-1]==1 and freq[1]==n-1)
        cout<<"star topology";
    else
        cout<<"unknown topology";
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
