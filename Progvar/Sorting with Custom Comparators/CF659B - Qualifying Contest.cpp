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
void solve(){
    int n, m; cin>>n>>m;
    vector<vector<pair<int, string>>> v(m+1);
    for(int i=0;i<n;i++){
        string name;
        int region, score;
        cin>>name>>region>>score;
        region--;
        v[region].emplace_back(-score, name);
    }
    for(int i=0;i<m;i++){
        sort(all(v[i]));
        if(v[i].size()>2 and v[i][1].first==v[i][2].first)
            cout<<"?";
        else
            cout<<v[i][0].second<<" "<<v[i][1].second;
        cout<<el;

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
