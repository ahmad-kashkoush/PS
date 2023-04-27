//
// Created by ak on 4/25/23.
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
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr[n]=0;
    for(int i=n-1;i>=0;i--)
        arr[i]=max(arr[i], arr[i+1]-1);
    for(int i=0;i<n;i++){
        cout<<(arr[i]?1:0)<<" ";
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
