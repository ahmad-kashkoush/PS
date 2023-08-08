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
    string s, t;
    cin >> s >> t;
    map<char, int> ss, tt;
    for (auto i : s)ss[i]++;
    for (auto i : t)tt[i]++;
    int yah = 0;
    for (auto& [ch, fr] : ss) {
        if (ss[ch] == 0)continue;
        int mn = min(fr, tt[ch]);
        fr -= mn, tt[ch] -= mn, yah += mn;
    }
    int whops = 0;
    for (auto& [ch, fr] : ss) {
        char c = (ch <= 'Z' ? ch + 32 : ch - 32);
        if (fr == 0)continue;
        int mn = min(fr, tt[c]);
        fr -= mn, tt[ch] -= mn, whops += mn;
    }
    cout << yah << " " << whops;
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