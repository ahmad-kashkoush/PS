//
// Created by ak on 5/3/23.
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
    int n, k; cin>>n>>k;
    int s=1;
    vector<int> ans;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            if(ans.size()==k-1)s*=i;
            else        ans.emplace_back(i);
            n/=i;
        }
    }
    if(n!=1){
        if(ans.size()==k-1)s*=n;
        else    ans.emplace_back(n);
    }
   if(ans.size()==k)
       cout(ans);
   else if(ans.size()==k-1 and s!=1){
       cout(ans);
       cout<<s;
   }else
       cout<<-1;
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

