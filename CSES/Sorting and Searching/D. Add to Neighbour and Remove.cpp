//
// Created by ak on 7/5/23.
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
    int n; cin>>n;
    ll sum=0;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int op=n;op>=1;op--){
        if(sum%op==0){
            ll EachElement=sum/op;
            ll cur=0;
            // sliding window
            bool can=true;
            for(int i=0;i<n;i++){
                cur+=a[i];
                if(cur>EachElement){
                    can=false;
                    break;
                }else if(cur==EachElement)cur=0;
            }
            if(can)
                return void(cout<<n-op);
        }
    }
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

