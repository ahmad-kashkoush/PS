//
// Created by ak on 8/17/23.
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
//    string s="1";
    map<int, string> bs;
    queue<pair<int, string>> q;
    vector<int> vis(n+10, 0);
    bs[1]="1";
    q.emplace(1, "1");
    vis[1]=true;
    while(!q.empty()){
        int rem=q.front().first;
        string st=q.front().second;
        q.pop();
        if(rem==0)return void(cout<<st);
        int rem1=(10*rem)%n;
        if(!vis[rem1]){
            q.emplace(rem1, st+"0");
            vis[rem1]=true;
        }
        int rem2=(10*rem +1)%n;
        if(!vis[rem2]){
            q.emplace(rem2, st+"1");
            vis[rem2]=true;
        }
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
