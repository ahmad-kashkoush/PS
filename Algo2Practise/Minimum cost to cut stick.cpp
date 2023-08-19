//
// Created by ahmed-kashkoush on 2/2/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int mod = 1e9 + 7, OO = INT_MAX;
//const int MAX=;
// int mem[MAX]
vector<int> cuts;
int minCuts( int st, int ed){

    if(st+1==ed)
        return 0;
    int ret=OO;
    for(int k=st+1;k<ed;k++){
        int sub1=minCuts( st, k);
        int sub2=minCuts(k, ed);
//            int sub1=0;
//            int sub2=0;
        int cost=cuts[ed]-cuts[st];
        ret=min(ret, cost+sub1+sub2);

    }
    return ret;
}
void solve() {
    int n, m; cin>>n>>m;

    for(int i=0;i<m;i++){
        int x;cin>>x;
        cuts.push_back(x);
    }
    cuts.push_back(0);
    cuts.push_back(n-1);
    sort(all(cuts));
    cout<<minCuts( 0, (int)cuts.size()-1);

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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
