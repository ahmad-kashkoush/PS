//
// Created by ak on 5/25/23.
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
    int n;cin>>n;
    map<int, int> fr;
    ll sum=0;
    while(n--){
        int x; cin>>x;
        sum+=x;
        fr[x]++;
    }
    int q;cin>>q;
    while(q--){
       int b, c;cin>>b>>c;
        sum=sum-(ll)b*fr[b]+(ll)c*fr[b];

       if(b!=c){
           fr[c]+=fr[b];
           fr[b]=0;
       }
       cout<<sum<<el;
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
