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
vector<ll> factor(ll x){
    vector<ll> ret;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            ret.emplace_back(i);
            while(x%i==0)
                x/=i;
        }
    }
    if(x!=1)ret.emplace_back(x);
    return ret;
}
void solve(){
        ll a, b; cin>>a>>b;
        cout(factor(b));
        map<ll, int> vis;
        for(auto i:factor(a)){
            vis[i]++;
        }
        vector<ll> common;
        int ans=0;
        for(auto i: factor(b)){
            vis[i]++;
            if(vis[i]==2)
                ans++;
        }
        cout<<ans+1;

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
        12--> 1 2 3  6
        18--> 1 2 3 6
        1 2 3 6
        coprime x, y--> prime numbers that are common+1

        420--> 1 2 3 5
        660--> 1 2 3 5


        mistakes
        1. rushed to solution--> brute force
        2. in a box[factorization, prime factorization]
  */