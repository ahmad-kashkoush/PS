//
// Created by ak on 4/30/23.
//https://atcoder.jp/contests/abc170/tasks/abc170_d
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
void solve(){
    int n;cin>>n;
    int a[n];
    map<int, int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int ans=0;
    if(mp[1]>1)return void(cout<<0);
    else if(mp[1]==1)return void(cout<<1);
    for(int i=0;i<n;i++){
        int x=a[i];
        if(mp[x]>1)continue;
        bool ok=true;
        for(int factor=2;factor*factor<=x;factor++){
            if(x%factor==0){
                if(mp.count(factor) or mp.count(x/factor) ) {
                    ok = false;
                    break;
                }
            }
        }
        ans+=ok;
    }
    cout<<ans;

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

