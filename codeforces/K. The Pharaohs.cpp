//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
ll sum(ll mid){
    return mid*(mid+1)/2;
}
void JustDie() {
    ll n; cin>>n;
    ll l=1, r=1e10, ans=-1;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(sum(mid)>=n){
            ans=mid;
            r=mid-1;
        }else l=mid+1;
    }
    cout<<ans<<el;
}

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int test=1;
      cin>>test;
    while(test--) {
        JustDie();
    }
}









