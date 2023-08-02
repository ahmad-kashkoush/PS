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
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int dis(int a, int b, int c, int d) {
    return abs(a - c) + abs(b - d);
}
bool valid(int r, int c, int n, int m) {
    return !(r < 0 or r >= n or c < 0 or c >= m);
}
void solve() {
    int n, m; cin >> n >> m;
    int grid[n + 1][m + 1];
    int depth[n + 1][m + 1];
    reset(depth, -1);
    queue<pair<int, int> > q;
    for (int i = 0;i < n;i++) {
        string s; cin >> s;
        for (int j = 0;j < m;j++) {
            grid[i][j] = s[j] - '0';
            if (grid[i][j]) {
                q.emplace(i, j);
                depth[i][j] = 0;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++)cout<<grid[i][j];
    //     cout<<el;
    // }
    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();
        for (int i = 0;i < 4;i++) {
            int nx = dx[i] + r;
            int ny = dy[i] + c;
            if (!valid(nx, ny, n, m))continue;
            // int distance = dis(nx, ny, r, c);
            int distance=1;
            if (depth[nx][ny] == -1) {
                depth[nx][ny] = depth[r][c] + distance;
                q.emplace(nx, ny);
            }
            else if (depth[nx][ny] > depth[r][c] + distance) {
                depth[nx][ny] = depth[r][c] + distance;
            }
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++)
            cout << depth[i][j] << " ";
        cout << el;
    }


}
int main() {
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