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
ll ncr(int n, int r){
    ll ans=1;
    for(int i=1;i<=r;i++){
        ans=ans*(n-r+i)/i;
    }
    return ans;
}
void solve(){
    int n; cin>>n;
    int arr[n];
    int ones=0, zeros=0;
    for(int i=0;i<n;i++)
        cin>>arr[i], ones+=arr[i]==1, zeros+=arr[i]==0;
    ll comp=0;
    for(int i=0;i<=zeros;i++){
        comp+=ncr(zeros, i);
    }
    cout<<ones*comp<<el;


}
int main() {
    judge();
    int t=1;
    cin>>t;
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
