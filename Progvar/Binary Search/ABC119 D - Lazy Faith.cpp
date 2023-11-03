//
// Created by ahmedkashkoush on 10/27/23.
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
ll calc(ll a, ll b, ll x){
    return min(abs(x-a), abs(x-b))+abs(b-a);
//    cout<<a<<" "<<b<<el;
    if(x<a and x<b)
        return abs(max(a, b)-x);
    else if(x>a and x>b)
        return abs(min(a, b)-x);


    ll aa=abs(b-x);
    ll bb=abs(a-x);
    if(aa>bb)swap(aa, bb);

   return 2*aa+bb;

}
void solve(){
    int a, b, q;
    cin>>a>>b>>q;
    vector<ll> s(a), t(b);
    cin(s);
    cin(t);
    while(q--){
        ll x;cin>>x;
        int nextT= lower_bound(all(t), x)-t.begin();
        int nextS=lower_bound(all(s), x)-s.begin();
        nextT-=nextT==b;
        nextS-=nextS==a;

        int prevS=nextS!=0?nextS-1:nextS;
        int prevT=nextT!=0?nextT-1:nextT;
        ll ans=min({
            calc(s[nextS], t[nextT], x),
            calc(s[prevS], t[prevT], x),
            calc(s[prevS], t[nextT], x),
            calc(s[nextS], t[prevT], x)
        });

//        cout<<s[nextS]<<" "<<t[nextT]<<el;
//        cout<<s[prevS]<<" "<<t[prevT]<<el;
//        cout<<ans<<"--------------"<<el;
        cout<<ans<<el;

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
