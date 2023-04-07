//
// Created by ak on 1/27/2023.
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
string a, b;
int EditDistance(int i, int j){
/*Base case
 * 1. both ending
 * 2. 1 empty*/
    if(i>=(int)a.size()||j>=(int)b.size())
        return abs((int)a.size()-(int)b.size());
    int ret=INT_MAX;
    if(a[i]==b[j])
        return ret=EditDistance(i+1, j+1);
        /*
         todo Change
         todo insert
         todo Delete
         */
        ret=min(ret, 1+EditDistance(i+1, j+1));//change
        ret=min(ret,1+EditDistance(i, j+1));
        ret=min(ret, 1+EditDistance(i+1, j));
        return ret;


}
void solve() {
    cin>>a>>b;
    cout<<"Distance is:"<<EditDistance(0, 0)<<" \n";
}

int main() {
    judge();
    tc();

    return 0;
}

void tc() {
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
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