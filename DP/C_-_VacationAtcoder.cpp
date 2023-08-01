//
// Created by ahmed-kashkoush on 1/18/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

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
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
const int MAX=1e5;
int n;
int a[MAX], b[MAX], c[MAX];
int dp[MAX][5];
int rec(int i, int prev){
    if(i==n)
        return 0;
    int &ret=dp[i][prev];
    if(ret!=-1)return ret;

    ret=0;
    if(prev!=0)
        ret=max(ret, a[i]+rec(i+1, 0));
    if(prev!=1)
        ret=max(ret, b[i]+rec(i+1, 1));
   if(prev!=2)
        ret=max(ret, c[i]+rec(i+1, 2));
    return ret;

}
void solve() {
   cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i]>>c[i];
    reset(dp, -1);
   cout<<rec(0, 4);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
//    judge();
//    tc();
    solve();
    return 0;
}

