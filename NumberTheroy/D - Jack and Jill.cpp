//
// Created by ak on 4/8/23.
//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=638
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
    double up, d, l, b, p, down, v;
    int Scen=1;
    while(scanf("%lf", &up)){
        if(up<1.0)break;
        scanf("%lf %lf %lf %lf %lf %lf", &d, &l, &b, &p, &down, &v);
        printf("Scenario %d:/n",&Scen);Scen++;
        printf("     up hill");
        printf("     well diameter");
        printf("     water level");
        printf("     bucket volume");
        printf("     bucket ascent rate");
        printf("     down hill");
        printf("     required volume");
        /*

         */



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

