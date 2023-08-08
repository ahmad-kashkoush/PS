#include<bits/stdc++.h>
#define el '\n'                              
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<""
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
void solve() {

    int n; cin>>n;
    ll f[n+10];
    f[0]=0;
    // ! Prepare 1^2^.....^n;
    for(int i=1;i<=n;i++){
        f[i]=(f[i-1]^i);
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        int a; cin>>a;
       ans^=a;
    }
    for(int i=2;i<=n;i++){
        
        int cycles=n/i;
        if(cycles &1)
            ans^=f[i-1];
        // 1 2 3 4 5 6 [7] [8 9 10--> Replace 1 2 3]
        ans^=f[n%i];
    }
    cout<<ans;

}
int main() {
    judge();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("../error.txt", "w", stderr);
#endif
}