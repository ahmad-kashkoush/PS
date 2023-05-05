//
// Created by ak on 4/12/23.
//https://vj.csgrandeur.cn/bbb425884f2ea93abb409ec6a137c50c?v=1680845597
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
ll fact(int n){
    ll factorial=1;
    for(int i=1;i<=n;i++)
        factorial*=i;
    return factorial;
}

int main() {
    judge();
    int n, m;
    while(true){
        cin>>n>>m;
        if(n==0 and m==0)break;
//        ll ans=fact(n)/(fact(n-m)*fact(m));
            ll ans =1;
            for(int i=1;i<=m;i++){
                ans=ans*(n-m+i)/i;
            }
        cout<<n<<" things taken "<<m<<" at a time is "<<ans<<" exactly.";
        cout<<el;
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

