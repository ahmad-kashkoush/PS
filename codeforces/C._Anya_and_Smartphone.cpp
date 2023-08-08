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
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    map<int, int> id;
    int a[n + 1];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        id[a[i]] = i;
    }
    ll ans = 0;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    for(int i=0;i<m;i++){
    
        ans += (id[b[i]]/k)+1;
        // cout << b << ": " << ans << "******************************" << el;
        if (id[b[i]] == 0)continue;
        int tmp = a[id[b[i]] - 1];
        swap(a[id[b[i]]], a[id[tmp]]);
        id[b[i]]--;
        id[tmp]++;
    }
    cout << ans;



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