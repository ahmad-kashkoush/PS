//
// Created by ak on 1/28/2023.
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

void judge();

void tc();


void solve() {
    int n, m;cin>>n>>m;
    vector<string> v(n);
    cin(v);
    int row[n], col[m];
    reset(row, 0);
    reset(col, 0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='.')
                row[i]++, col[j]++;
    }
    }
    int ans=n+m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            ans=min(ans, row[i]+col[j]-(v[i][j]=='.'));
    }
    cout<<ans;
}

int main() {
    judge();
    tc();
//    solve();
    return 0;
}

void tc() {
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
