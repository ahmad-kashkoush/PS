//
// Created by ak on 7/16/23.
//

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define el '\n'
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
void solve(){
        int n, m; cin>>n>>m;
        string row, col;
        cin>>row>>col;
        char rowBegin=row.front(), rowEnd=row.back();
        char colBegin=col.front(), colEnd=col.back();
        /*
         cases:
         >>>>>>>>>>
         ^        v
         ^        v
         <<<<<<<<<
         ----------
         <<<<<<<<<<<<
         v          ^
         v          ^
         >>>>>>>>>>>>>
         */
        bool ok=(rowBegin=='>' and rowEnd=='<' and colBegin=='^' and colEnd=='v');
           ok =ok ||(rowBegin=='<' and rowEnd=='>' and colBegin=='v' and colEnd=='^');
           cout<<(ok?"YES":"NO");
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//        cout<<el;
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
