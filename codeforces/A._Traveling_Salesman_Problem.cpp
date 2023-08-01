//
// Created by ahmed-kashkoush on 3/22/23.
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
    int mnx, mxX,mny, mxY, a, b;
    mnx=mxX=mny=mxY=0;
    while(n--){
        cin>>a>>b;
        mnx=min(a, mnx);
        mxX=max(a, mxX);
        mny=min(b, mny);
        mxY=max(b, mxY);

    }
    int ans=abs(mxX+mxY-mnx-mny);
    ans*=2;
    cout<<ans<<el;

}
int main() {
    judge();
    int t=1;
    cin>>t;
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
