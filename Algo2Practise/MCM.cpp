//
// Created by ak on 2/1/2023.
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

const int mod = 1e9 + 7, OO = 2 * 1e9;
const int MAX=1001;
struct ele{int col=0, row=0;};
vector<ele> v(MAX);
int dp[MAX][MAX];
int MCM(int start, int ed){
    if(start==ed)
        return 0;
    if(dp[start][ed]!=-1)
            return dp[start][ed];
        int &ret=dp[start][ed];


    ret=INT_MAX;
    for(int k=start;k<ed;k++){
        int op=v[start].row*v[k].col*v[ed].col;
        int sub1=MCM(start, k);
        int sub2=MCM(k+1, ed);
        ret=min(ret, op+sub1+sub2);

    }
    return ret;
}
void solve() {
        int n; cin>>n;
        for(int i=0;i<n;i++)
            cin>>v[i].row>>v[i].col;
       for(int i=0;i<MAX;i++)
           memset(dp[i], -1, sizeof(dp[i]));
        cout<<MCM(0, n-1);

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
            cout<<endl;
        //cout<<el;
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
