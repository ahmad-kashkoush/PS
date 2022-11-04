//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int n; ll x, d;
    cin>>n>>x>>d;
    vector<ll> v(n);
    ll ans=0;
    for(auto &i:v)cin>>i;

    for(int i=1;i<(1<<n);i++){
        // from every possibility i need 2 value[sum, dif]
        ll sum=0;
        ll mx=0, mn=INT_MAX;
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                sum+=v[j];
                mn=min(v[j], mn);
                mx=max(v[j], mx);
            }
        }
        ll dif=mx-mn;
        ans+=(sum>=x&& dif<=d);
    }
    cout<<ans<<el;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
    return 0;


}










