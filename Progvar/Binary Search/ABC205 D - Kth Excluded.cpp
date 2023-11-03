//
// Created by ahmedkashkoush on 10/27/23.
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
    int n, q;
    cin>>n>>q;
    vector<ll> A(n);
    cin(A);
    vector<ll> b(n);
    b[0]=A[0]-0-1;

    for(int i=1;i<n;i++){
        b[i]=b[i-1]+A[i]-A[i-1]-1;
    }
//    cout(b);
//    cout<<el;
    while(q--){
        ll k; cin>>k;
        int it= lower_bound(all(b), k)-b.begin();
        it--;
        if(it<0)
            cout<<k;
        else
            cout<<A[it]+k-b[it];
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

