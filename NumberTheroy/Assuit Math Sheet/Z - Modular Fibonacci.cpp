//
// Created by ak on 4/10/23.
//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1170
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
        int n, m;

        while(cin>>n){
//            cin>>m;
            int a=0, b=1;
            int c=b;
            for(int i=2;i<=n;i++)
                c=a+b, a=b, b=c;
//            cout<<c%(1<<m);
            cout<<n<<"--> "<<c<<" ";
            cout<<el;
        }
}
int main() {
    judge();
    solve();

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

