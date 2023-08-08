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
struct wall {
    int l, r, y;
};
  bool cmp(wall a, wall b) {
        if(a.y == b.y) {
            if (a.l == b.l)
                return a.r < b.r;
            return a.r < b.r;
    }
    return a.y < b.y;
}
void solve() {
    int n, q; cin >> n >> q;
    set<int> st;
    for (int i = 1;i <= n;i++)st.emplace(i);
    vector<wall> v(q);
    for (int i = 0;i < q;i++)
       cin>>v[i].l>>v[i].r>>v[i].y;

    sort(all(v), cmp);
    for (auto& wll : v) {
        bool ok = false;
        while (true) {
            auto it = st.lower_bound(wll.l);
            if (it == st.end() or *it > wll.r)break;
            st.erase(it);
            ok = true;
        }
        if (ok) {
            st.emplace(wll.l);
            st.emplace(wll.r);
        }
    }
    cout<<st.size() << el;
}
int main() {
    judge();
    int t = 1;
    cin >> t;
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