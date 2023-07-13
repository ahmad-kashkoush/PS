//
// Created by ak on 6/11/23.
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
/*
    a*(p+.5)=a*(2p+1)/2=a/2*(2p+1)
    3 5
    15 30 45
    15 45
 */
ll LCM(ll a, ll b){
    return a/__gcd(a, b)*b;
}
void solve(){
    int n, m; cin>>n>>m;
    ll arr[n];
    cin>>arr[0];
    arr[0]/=2;
    ll least=arr[0];
    if(n==1){
        cout<<((m/least)+1)/2;
        return;
    }
    for(int i=1;i<n;i++) {
        cin >> arr[i];
        arr[i]/=2;
        least=LCM(least, arr[i]);
    }
    cout<<"LCM: "<<least<<el;
    ll tmp=0;
    ll x=least;
    while(least%2==0)
        tmp++, least/=2;
    for(int i=0;i<n;i++){
        ll tmp2=0;
        while(arr[i]%2==0)
            tmp2++, arr[i]/=2;
        if(tmp!=tmp2)
            return void(cout<<0);
    }
    cout<<((m/x)+1)/2;







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

/*
 x-->[1, m]
 A--> [a/2, a2/2....]
 x=a*(p+.5)=a/2*(2p+1)
 x=a/2*(2p+1)
 a/2, a2/2, .....,an/2-->

x multiple of [a/2...an/2]
x=a/2*(2p+1)---> twos(x)=twos(a/2)



 */