#include<bits/stdc++.h>
#define el '\n'                              
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<""
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int trailing9(ll num){
    int cnt=0;
    while(num%10==9){
            num/=10;
            cnt++;
    }
    return cnt;
}
void solve() {
    ll n, d;
    cin >> n >> d;
    ll tmp = n;
    ll ans = n;
    ll x = 10, cnt = 9;
    int mx = trailing9(n);

    while (n - tmp <= d) {
        tmp = (((tmp / x) - 1) * x) + cnt;
        cnt += 9 * x;
        x *= 10;
        int curMax=trailing9(tmp);
        if (n - tmp <= d and curMax>mx){
            ans = tmp;
            mx=curMax;
        }
    }
    cout << ans << el;
}
int main() {
    judge();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("../error.txt", "w", stderr);
#endif
}