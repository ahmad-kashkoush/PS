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
int n;
vector<int> a;
void solve(){
    int n; cin>>n;
    ll  a[n];
    ll maxSum=LLONG_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxSum=max(a[i],maxSum);
    }
    ll curSum=0;
    for(int i=0;i<n;i++){
        curSum+=a[i];
        maxSum=max(maxSum, curSum);
        curSum=max((ll)0, curSum);
    }
    cout<<maxSum;
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
