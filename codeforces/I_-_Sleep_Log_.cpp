//
// Created by ak on 7/3/23.
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
    vector<ll>  a(n, 0), pre(n+1, 0);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        if(i&1)pre[i]=pre[i-1];
        else    pre[i]=pre[i-1]+(a[i]-a[i-1]);
    }
   int q; cin>>q;
   while(q--){
       ll l, r; cin>>l>>r;
       int st= upper_bound(a.begin()+1, a.end(), l)-a.begin()-1;
      int en=upper_bound(a.begin()+1,a.end(), r)-a.begin()-1;
//       ll term1=pre[st]+ (pre[st+1]-pre[st])/(a[st+1]-a[st])*(l-a[st]);
//      ll term2=pre[en]+  (pre[en+1]-pre[en])/(a[en+1]-a[en])*(r-a[en]);
//       cout<<term2-term1<<el;
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
