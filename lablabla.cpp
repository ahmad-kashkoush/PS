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
void solve() {
    int n;
    cin >> n;
    ll k;
    cin >> k;

    ll l = 1, r = k;
    ll ans = 1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (mid * (mid - 1) / 2 < k) {
            ans = max(ans, mid);
            l = mid + 1;
        } else r = mid - 1;
    }

    string s = string(n, 'a');
    s[n - (ans + 1)] = 'b';
    s[n - (k - (ans * (ans - 1) / 2))] = 'b';
//        cout<<ans+1<<" "<<k-(ans*(ans-1)/2)<<" "<<s<<el;
    cout << s;


}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
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
