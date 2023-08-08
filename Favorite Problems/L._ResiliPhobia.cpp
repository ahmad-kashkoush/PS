// https://codeforces.com/group/qTr3b0vgF0/contest/465480/problem/L
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
const int N = 1e3 + 5;
// int dp[N][N][5];
// int a[N];
// int n, m;
bool same(int aa, int bb) {
    return (aa & 1) == (bb & 1);
}
// int rec(int i, int parity, int k) {
//     if (i == n)return 0;

//     int& ret = dp[i][k][parity];
//     if (~ret)return ret;
//     ret = 0;
//     ret = max(ret, rec(i + 1, parity, k));
//     if (!same(a[i], parity))
//         ret = max(ret, a[i] + rec(i + 1, parity ^ 1, 1));
//     if (same(a[i], parity) and k < m) {
//         ret = max(ret, a[i] + rec(i + 1, parity, k + 1));
//     }
//     return ret;

// }
// // Fuck Life
// void solve() {

//     cin >> n >> m;
//     for (int i = 0;i < n;i++)
//         cin >> a[i];


//     for (int i = 0;i < n;i++) {
//         for (int j = 0;j < n;j++) {
//             for (int k = 0;k < 5;k++)
//                 dp[i][j][k] = -1;
//         }
//     }
//     cout << rec(0, 0, 0);
// }
void solve() {
    int n, m; cin >> n >> m;
    int a[n + 1];
    for (int i = 1;i <= n;i++)
        cin >> a[i];
    ll ans = 0;
    priority_queue<int> pq;
    int c = 0;

    for (int i = 1;i <= n + 1;i++) {
        if (i == n + 1 or (i <= n and !same(a[i], a[i - 1]))) {
            c = 0;
            while (!pq.empty() and c < m) {
                ans += pq.top();
                pq.pop();
                c++;
            }
            if (i == n + 1)return void(cout << ans);
            while (!pq.empty())pq.pop();
        }
        pq.emplace(a[i]);
    }


    cout << ans;


}
int32_t main() {
    judge();
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
        cout << el;
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
/* // ! Mistakes
    1. Didn't verify dp state
 */