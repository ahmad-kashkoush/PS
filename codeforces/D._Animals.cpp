
// Created by ahmed-kashkoush on 2/20/23.
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
vector<vector<int>> dp;
int ans(int i, int food, const vector<int> &c){
    if(i==c.size())
        return 0;
    int &ret=dp[i][food];
    if(ret!=-1)return ret;
    ret=ans(i+1, food, c);
    if(c[i]<=food)
        ret=max(ret, 1+ans(i+1, food-c[i], c));
    return ret;
}
void solve() {
    int n, x;
    cin>>n>>x;
    vector<int> c(n);
    dp=vector<vector<int>> (n, vector<int>(x+10, -1));
    cin(c);
    for(int i=0;i<n;i++)
        c[i]*=(n-i);

    cout<<ans(0, x, c);
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
        cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        cout<<el;
    }
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

}