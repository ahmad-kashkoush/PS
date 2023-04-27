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
    int n, a, b;cin>>n>>a>>b;
    vector<int> ar(n, -1);
    ar[0]=a, ar[n/2]=b;
    map<int, int> mp;
    mp[a]++, mp[b]++;
    for(int i=1, ele=n;i<n/2;i++){
        if(mp[ele])ele--;
        if(ele>a)ar[i]=ele--;
    }
    for(int i=n/2+1, ele=1;i<n;i++){
        if(mp[ele])ele++;
        if(ele<b)ar[i]=ele++;
    }
    for(int i=0;i<n;i++){
        if(ar[i]<0)return void(cout<<"-1");
    }
    cout(ar);
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
