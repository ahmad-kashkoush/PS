//
// Created by ak on 4/14/23.
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
bool cmp(int a, int b){
        if((a&1)==0 && (b&1) )
            return true;
        return false;
}

void solve(){
    int n; cin>>n;
    int arr[n];

    int even=0;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr, arr+n, cmp);
    int ans=0;
   for(int i=0;i<n-1;i++){
       for(int j=i+1; j<n;j++){
           ans+=__gcd(arr[i], 2*arr[j])>1;
       }
   }

   cout<<ans<<el;

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
