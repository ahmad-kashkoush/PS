//
// Created by ak on 7/25/23.
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
    int n;cin>>n;
    map<int, pair<int, int>> mp;
    int case0[2][n];
    reset(case0, 0);
    int a[n], b[n];
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        pq.push(-a[i]);pq.push(-b[i]);
        mp[a[i]]={0, i};
        mp[b[i]]={1, i};
    }
    // k=0--> push mark n numbers
    int k=n;
    while(k--){
        int num=-pq.top();
        pq.pop();
        auto [semi, id]=mp[num];
        case0[semi][id]=1;
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout<<(j<n/2 or case0[i][j]);
        }
        cout<<el;
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

