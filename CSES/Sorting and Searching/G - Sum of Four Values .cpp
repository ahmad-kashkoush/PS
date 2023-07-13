//
// Created by ak on 7/7/23.
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
void solve(){
    int n;ll x; cin>>n>>x;
    map<ll, pair<int, int>>pairSum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<i;j++){
            pairSum[a[i]+a[j]]={i, j};
        }
    }

    for(int i=0;i<n;i++){
        ll z=a[i];
        for(int j=i+1;j<n;j++){
            ll zz=a[j];
            ll p=x-(z+zz);
            auto it=pairSum.find(p);
            if(it!=pairSum.end()){
                int p1=it->second.first;
                int p2=it->second.second;
                if(i!=p1 and i!=p2 and j!=p1 and j!=p2){
                    cout<<i+1<<" "<<j+1<<" "<<p1+1<<" "<<p2+1;
                    return;
                }
            }
        }
    }

    cout<<"IMPOSSIBLE";
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
