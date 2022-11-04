//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    // math
    // x/u+y/v=(x+y)/(u+v)
    // let x=u^2, y=-(v^2)
    // u-v=(u^2-v^2)/(u+v)-->u-v=(u-v)*(u+v)/(u+v)
    ll u, v; cin>>u>>v;
    ll x=u*u, y=-(v*v);
    cout<<x<<" "<<y;


    cout<<el;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;


}










