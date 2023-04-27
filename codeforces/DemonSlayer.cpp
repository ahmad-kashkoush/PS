//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
const int mod=1e9+7;
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        sum-=v[i];
        ans=(ans +(sum%mod) * (v[i]%mod))%mod;
    }
    cout<<ans;

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










