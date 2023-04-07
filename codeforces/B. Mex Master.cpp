//
// Created by ahmed-kashkoush on 3/29/23.
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
    int n; cin>>n;
    vector<int> v(n), pro(n-1);
    unordered_map<int, int> mp;
    bool x=0;
   for(int i=0;i<n;i++){
       cin>>v[i];
       mp[v[i]]++;
       if(v[i]>=2)x=true;
   }
   /*
    Cases
    1. zero<= n/2+1;
    2. zero>n/2+1 and ones>
    */
   if(mp[0]<=(n+1)/2)
       cout<<0;
   else if(x or mp[0]==n)
       cout<<1;
   else
       cout<<2;


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

