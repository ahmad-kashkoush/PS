//
// Created by ak on 8/9/23.
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
    int n, d; cin>>n>>d;
    vector<int> a(n);
    cin(a);
    sort(all(a));
    ll ans=0;
    for(int i=0;i<n;i++){
        int dist= lower_bound(a.begin()+i, a.end(), a[i]+d)-a.begin();
        if(dist>=n)dist=n-1;
        if(a[dist]>a[i]+d)dist--;
        int cnt=dist-(i+1);
        ans+=(ll)cnt*(cnt+1)/2;
    }
    cout<<ans<<el;

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
