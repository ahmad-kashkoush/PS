//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
    vector<ll> v;
bool check(ll mid, int k){
    int sum=0;
    for(auto v:v){
        sum+=v/mid;
        if(v%mid==0)sum--;
        if(sum>k)return false;
    }
    return true;
}
void JustDie() {
    int n, k; cin>>n>>k;
    v=vector<ll> (n);
    for(auto &v:v)cin>>v;
    ll l=1, r=1e10;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(check(mid, k))
            r=mid-1;
        else
            l=mid+1;
    }
    cout<<l<<el;


}

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int test=1;
    //  cin>>test;
    while(test--) {
        JustDie();
    }
}









