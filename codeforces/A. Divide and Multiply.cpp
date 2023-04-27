//
// Created by ak on 4/24/23.
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
void solve() {
    int n;
    cin >> n;
    ll twos = 1;
    ll ans = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        while (!(a[i] & 1)) {
            twos *= 2;
//            cout<<twos<<el;
            a[i] /= 2;
        }
    }
    sort(a, a+n);
    for(int i=0;i<n-1;i++){
        ans+=a[i];
    }
//   cout<<twos;

    ans+=a[n-1]*twos;
    cout<<ans;

}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();cout<<el;
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

