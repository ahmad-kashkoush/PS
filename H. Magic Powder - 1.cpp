//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;

ll n, m;
vector<ll> a, b;
bool can(ll mid){
    ll k=m;
    for(int i=0;i<n;i++){
        ll aa=mid*a[i];
        if(aa>b[i])
            k-=aa-b[i];
        if(k<0)return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    cin>>n>>m;
    a=vector<ll>(n);
    b=vector<ll> (n);
    for(auto &a:a)cin>>a;
    for(auto &b:b)cin>>b;
    ll l=0, r=1e10;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(can(mid)){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<ans;
}









