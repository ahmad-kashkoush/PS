//
// Created by ak on 7/5/23.
//https://cses.fi/problemset/task/1084
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
        int n, m, k;
        cin>>n>>m>>k;
        priority_queue<int>bq, aq;
        while(n--){
            int a; cin>>a;
            aq.emplace(a);
        }
        while(m--){
            int b; cin>>b;
            bq.emplace(b);
        }
        int ans=0;
        while(!bq.empty() and !aq.empty()){
            int a=aq.top(), b=bq.top();
            if(abs(b-a)<=k){
                bq.pop();aq.pop();
                ans++;
            }else {
                if(a>b)aq.pop();
                else if(b>a)bq.pop();
            }
        }
        cout<<ans;

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

