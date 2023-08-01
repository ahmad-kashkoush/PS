//
// Created by ak on 4/24/23.
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
    int mx=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mx=max(arr[i], mx);
    }
    int ans=0;
    int sufMx=0;
    for(int i=n-1;arr[i]!=mx;i--){
        if(arr[i]>sufMx)
            ans++;
        sufMx=max(sufMx, arr[i]);
    }
    cout<<ans<<el;

}
/*
 *
 *
5 3 2 4 1
1 5 3 2 4
1 3 2 4 5

 */
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
