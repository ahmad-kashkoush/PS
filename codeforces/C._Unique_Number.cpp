//
// Created by ak on 4/22/23.
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
    if(n>45)cout<<"-1";
    else{
        int i=9;
        stack<int> ans;
        while(i){
            if(n>=i and n!=0)
                ans.push(i), n-=i;
            i--;
        }

      while(!ans.empty())
          cout<<ans.top(), ans.pop();
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
