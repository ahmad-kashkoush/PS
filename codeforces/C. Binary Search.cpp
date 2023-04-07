//
// Created by ahmed-kashkoush on 3/28/23.
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
    int n, x, pos;
    cin>>n>>x>>pos;
    ll ans=1;
    int Before=x-1, After=n-x;
    int Exceptions=1;
    int l=0, r=n;
    while(l<r){
        int mid=(l+r)>>1;
        if(mid<pos){
            l=mid+1;
            ans=(ans*Before--)%mod;

        }else if(mid>pos){
            r=mid;
            ans=(ans*After--)%mod;

        }else
            l=mid+1;

    }
    for(int i=1;i<=Before+After;i++)
        ans=(ans*i)%mod;

    cout<<ans;


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

