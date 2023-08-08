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








void solve() {
    int n; cin >> n;
    vector<ll> tmp;
    //! Enter arrays number !=0
    for (int i = 0;i < n;i++) {
        ll a; cin >> a;
        if (a) tmp.emplace_back(a);
    }



    // ! count Frequency if equal to three then it's the smallest cycle
    vector<int> frq(70);
    for (int i = 0;i < tmp.size();i++) {
        bitset<70> s = tmp[i];
        for (int j = 0;j < 70;j++) {
            if (s[j]) {
                frq[j]++;
                if (frq[j] > 2)return void(cout << "3");
            }
        }
    }

    // ! Build Graph: addEdge(a[i], a[j]) iff (a[i]&a[j])!=0
    vector < vector<int>  >adj(((int)tmp.size()) + 1);
    for (int i = 0;i < tmp.size();i++) {
        for (int j = i + 1;j < tmp.size();j++) {
            if (tmp[i] & tmp[j]) {
                adj[i].emplace_back(j);
                adj[j].emplace_back(i);
            }
        }
    }

    // ! checking Cycles
    // ! minimize cycles nodes by starting from every node once and get the minimum cycle
    int minimumCycle = 1e9;
    for (int i = 0;i < tmp.size();i++) {

        vector<int> lvl(n, 0);
        queue<pair<int, int> > q;
        q.emplace(i, -1);
        lvl[i] = 0;
        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (int child : adj[node]) {
                if (lvl[child] and child != parent)
                    minimumCycle = min(minimumCycle, lvl[child] + lvl[node] + 1);
                else if (child != parent) {
                    lvl[child] = lvl[node] + 1;
                    q.emplace(child, node);
                }

            }
        }
   
    }
    cout << (minimumCycle == 1e9 ? -1 : minimumCycle);
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