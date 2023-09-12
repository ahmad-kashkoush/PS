//
// Created by ak on 9/4/23.
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
const int N=2*1e5+10;
void solve(){
    int n, k, q;
    cin>>n>>k>>q;
    int freq[N];
    reset(freq, 0);
    for(int i=0;i<n;i++){
        int l, r; cin>>l>>r;
        freq[l]++;
        freq[r+1]--;
    }
    int pre[N];
    pre[0]=0;
    for(int i=1;i<N;i++){
        freq[i]+=freq[i-1];
        pre[i]=pre[i-1]+(freq[i]>=k);
    }
    while(q--){
        int l, r; cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<el;
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
