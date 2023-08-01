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
    int n, k;
    cin >> n >> k;
    int a[n];
    ll sum = 0;
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.emplace(a[i], i);
        sum += a[i];
    }

    vector<pair<int, int>> ans, curPair;
    int cnt = 0;
    int cur = 0;
    int diff = st.rbegin()->first - st.begin()->first;
    bool brk = false;
    while (cur<=k) {




//        Update max
        auto [mx, mxId] = *st.rbegin();
        st.erase({mx, mxId});
        mx--;
        cur++;
        st.emplace(mx, mxId);


//        Update mn
        auto [mn, mnId] = *st.begin();
        st.erase({mn, mnId});
        mn++;
        st.emplace(mn, mnId);
//        Adding the move
        curPair.emplace_back(mxId, mnId);

        int tmpDiff = st.rbegin()->first - st.begin()->first;
//            cout<<tmpDiff<<el;
        if (tmpDiff < diff) {
            if(ans.size()+curPair.size()>k)continue;
            diff = tmpDiff;
            cnt = cur;
            for (auto i: curPair) {
                ans.emplace_back(i);
            }
            curPair.clear();
        }
    }

        cout<<diff<<" "<<ans.size()<<el;
        for(auto pa:ans){
            cout<<pa.first+1<<" "<<pa.second+1<<el;
        }



}

int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
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
