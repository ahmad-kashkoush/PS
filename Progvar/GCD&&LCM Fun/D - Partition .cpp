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
    int n, m; cin>>n>>m;
    int ans=0;
    for(int i=1;i*i<=m;i++){
        if(m%i==0){
            // number is either >=n or <=n
            if(m/i>=n)ans=max(ans, i);
            if(i>=n) ans=max(ans, m/i);
        }
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
/*
        m n
        i
        int ans=0;
        for(i--> m)--> 1e9
            m%i==0, m/i>=n
            ans=max(ans, i)
        3 14

       for(i*i--> m)
            i, m/i



        1 1 12--> 1
        2 2 10--> 2
        7 7



 */