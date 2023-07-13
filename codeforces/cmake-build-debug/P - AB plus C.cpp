//
// Created by ak on 6/29/23.
//
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
    ll x;cin>>x;

          // x-1>range
          // factorize x`, where x` is number has factors in range
   if(x<=1)cout<<-1;
   else{
       int tmp=1000000;
       if(x<=1e6)
           cout<<1<<" "<<1<<" "<<x-1;
       else if(x>1e6 and x%tmp!=0)
           cout<<tmp<<" "<<x/tmp<<" "<<x%tmp;
       else
           cout<<tmp<<" "<<x/tmp-1<<" "<<tmp;
   }


}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
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

