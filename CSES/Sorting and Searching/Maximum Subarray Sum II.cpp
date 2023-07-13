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
        int n, a, b;
        cin>>n>>a>>b;
        ll pre[n+1];
        pre[0]=0;
        for(int i=1;i<=n;i++){
            int a; cin>>a;
            pre[i]=pre[i-1]+a;
        }
        multiset<ll> pq;
        for(int i=a;i<=b;i++){
            pq.emplace(pre[i]);
        }
        ll mx=*pq.rbegin();
        for(int i=1;i+a<=n;i++){
            pq.erase(pre[i+a-1]);
            pq.emplace(pre[min(i+b, n)]);
            mx=max(*pq.rbegin()-pre[i], mx);
        }
        cout<<mx;
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
