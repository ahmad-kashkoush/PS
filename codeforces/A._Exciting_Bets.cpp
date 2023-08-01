//
// Created by ak on 4/14/23.
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
        ll a, b;cin>>a>>b;
        if(a==b)return void(cout<<"0 0");
        if(a<b)swap(a, b);
        ll gcd=a-b;
        ll ans=min(a%gcd, gcd-a%gcd);
        cout<<gcd<<" "<<ans;


}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
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
/*
    g=gcd(a, b)==gcd(a-b, b);
    3, 7
               6 <--7%3--> 2
               7%3=1
               3-7%3=2-1=1


 */