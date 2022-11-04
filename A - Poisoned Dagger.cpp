//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
vector<ll> v;
ll h;
bool can(ll k){
        ll damage=0;
        v.push_back(v[(int)v.size()-1]+k+1);
        for(int i=0;i<v.size()-1;i++){
            damage+=min(k, v[i+1]-v[i]);
        }
        v.pop_back();
        return damage>=h;
}

void solve(){
    int n;
    cin>>n>>h;
    v.resize(n);
    for(auto &i:v)
        cin>>i;
    ll l=0, r=h;
    ll ans=h;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(can(mid)){
            ans=mid;
            r=mid-1;
        }else   l=mid+1;
    }
    cout<<ans;
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










