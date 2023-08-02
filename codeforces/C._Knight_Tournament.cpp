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
void solve() {
    int n, m; cin >> n >> m;
    int winner[n + 10];
    reset(winner, 0);
    set<int> alive;
    for (int i = 1;i <= n;i++)alive.emplace(i);
    while (m--) {
        int l, r, val;cin >> l >> r >> val;
        // ! Brute Force Solution
        // for (int i = l;i <= r;i++) {
        //     if (i == val)continue;
        //     if (winner[i] != 0)continue;// ? 
        //     winner[i] = val;
        // }
        auto it = alive.lower_bound(l);
        if (it == alive.end())continue;
        // cout<<"Hello";
        vector<int> erased;
        while (*it <= r and it != alive.end()) {
            if (*it != val) {
                erased.push_back(*it);
            }
            it++;
            if (it == alive.end())break;
        }
        for (auto i : erased) {
            winner[i] = val;
            alive.erase(i);
        }
    }
    for (int i = 1;i <= n;i++)cout << winner[i] << " ";


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