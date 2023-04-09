//
// Created by ahmed-kashkoush on 2/18/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve() {
    int n, m; cin>>n>>m;
    vector<string> v(n);
    cin(v);
    vector<int> score(m);
    cin(score);
    vector<vector<int>> frq(m, vector<int>(26, 0));
    vector<int> col(m, 0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c=v[i][j];
            frq[j][c-'A']++;
            col[j]=max(col[j], frq[j][c-'A']);
        }
    }
    ll ans=0;
    for(int i=0;i<m;i++)
        ans+=score[i]*col[i];

    cout<<ans;

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}
void tc(){
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        cout<<el;
    }
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