//
// Created by ak on 4/11/23.
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
int OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int fastPower(int b, int p, int mod){
    int res=1;
    while(p>0){
        if(p&1)
            res=(res*b)%mod;
        b=((b%mod)*(b%mod))%mod;
        p>>=1;
    }
    return res;
}
int main() {
    judge();
    int t;
    cin>>t;
    while(t--){
        int a, b, c;cin>>a>>b>>c;
        cout<<fastPower(a, b, c)<<el;
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

