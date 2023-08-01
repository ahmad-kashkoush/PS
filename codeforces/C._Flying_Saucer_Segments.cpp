//
// Created by ak on 7/29/23.
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
ll mul(ll a, ll b, ll m){
    return ((a%m)*(b%m))%m;
}

ll fastPower(ll base, ll power, ll modulo) {
    ll result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = mul(result, base, modulo);
        }
        base = mul(base, base, modulo);
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
void solve(){
    ll n, m; cin>>n>>m;
    cout<<(fastPower(3, n, m)-1+m)%m;

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
