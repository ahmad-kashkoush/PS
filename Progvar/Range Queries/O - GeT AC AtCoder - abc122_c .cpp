//
// Created by ak on 9/5/23.
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
    int n, q; cin>>n>>q;
    string s; cin>>s;
    int pre[n+1];
    pre[0]=0;
    for(int i=0;i<n-2+1;i++){
        string test=s.substr(i, 2);
        pre[i+1]=pre[i]+(test=="AC");
    }
    for(int i=n-2+1;i<n;i++)
        pre[i+1]=pre[i];
    while(q--){
        int l, r;
        cin>>l>>r;
        r--;
        cout<<(r>=l-1?pre[r]-pre[l-1]:0)<<el;
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
