//
// Created by ak on 4/30/23.
//https://atcoder.jp/contests/abc084/tasks/abc084_d
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int N=1e6+1;
bool is_composite[N];
void sieve(){// o(1e3)
    is_composite[0]=is_composite[1]=true;
    for(int i=2;i*i<N;i++){
        if(!is_composite[i])
            for(int j=i*i;j<N;j+=i)
                is_composite[j]=true;
    }
}
void solve(){
        int pre[N];
        pre[1]=pre[2]=0;
        for(int i=3;i<N;i++){
           int inc=(i&1) and (!is_composite[i] and !is_composite[(i+1)/2]);
           pre[i]=pre[i-1]+inc;
        }
        int ans=0;
        int q; cin>>q;
        while(q--){
            int l, r; cin>>l>>r;
            cout<<pre[r]-pre[l-1]<<el;
        }


}
int main() {
    judge();
    sieve();
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

