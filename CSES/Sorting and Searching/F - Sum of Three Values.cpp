//
// Created by ak on 7/7/23.
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
    int n, x; cin>>n>>x;
    map<int, int> mp, id;
    pair<int, int> a[n];

    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a, a+n);
    for(int i=0;i<n;i++){
        int z=x-a[i].first;
        int r=n-1;
       for(int l=i+1;l<r;l++){
           while(l<r and a[l].first+a[r].first>z)r--;
            if(l<r and a[l].first+a[r].first==z){
               cout<<a[i].second+1<<" "<<a[l].second+1<<" "<<a[r].second+1;
               return;
           }
       }
    }
    cout<<"IMPOSSIBLE";
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
