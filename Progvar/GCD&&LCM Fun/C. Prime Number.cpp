//
// Created by ak on 5/29/23.
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
ll mul(ll a, ll b, ll md){
    return ((a%md) * (b%md))%md;
}
ll fastPower(ll a, ll power){
    ll ans=1;
    while(power>0){
        if((power&1)==1)ans=mul(ans, a, mod);
        a=mul(a, a, mod);
        power= power>>1;

    }
    return ans;
}
void solve() {
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        sum+=a[i];
    }
    map<ll, ll> mp;
    vector<ll> v;
    for(int i=0;i<n;i++){
        mp[sum-a[i]]++;
        a[i]=sum-a[i];
    }
    sort(all(a), greater<>());
    while(true){
        ll j=a.back();
        int cnt=0;
        while(!a.empty() and a.back()==j){
            cnt++;
            a.pop_back();
        }
        if(cnt%x!=0){
            return void(cout<<fastPower(x, min(j, sum)));
        }else{
            for(int i=0;i<cnt/x;i++)
                a.push_back(j+1);
        }
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
