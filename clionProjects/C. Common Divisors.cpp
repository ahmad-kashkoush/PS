//
// Created by ak on 1/26/2023.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
#define gcd(a, b) __gcd(a, b)
using namespace std;

void judge();

void tc();

const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
ll nDiv(ll k){
    set<ll> st;
    st.insert(1);
    for(ll i=1;i<=(ll)sqrt(k);i++){
        if(k%i==0){
            st.emplace(i);
            st.emplace(k/i);
        }
    }
    return (ll)st.size();
}
void solve() {
    int n; cin>>n;

    ll pre;cin>>pre;
    while(--n){
        ll x; cin>>x;
        pre=gcd(x, pre);
    }
    cout<<nDiv(pre)<<" ";

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}

void tc() {
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        //cout<<el;
    }
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