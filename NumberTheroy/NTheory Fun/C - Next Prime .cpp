//
// Created by ak on 4/29/23.
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
    sieve();
    int n; cin>>n;
    while(is_composite[n])n++;
    cout<<n;
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
