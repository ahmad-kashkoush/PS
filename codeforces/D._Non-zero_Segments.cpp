//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    // idea
    // -From prefix sum--> sum(subsegmet[l, r])=pre[r]-pre[l-1]
    // if(sum(subsegment[l, r])=0, then pre[r]=pre[l-1]
    // so every time you get the same sum, then this subsegment sum =0
    // our solution is to count subsegments equal 0
    int n;cin>>n;
    ll sum=0;
    int cnt=0;
    map<ll, int> vis;
    vis[0]++;
    while(n--){
        int x;cin>>x;
        sum+=x;
        if(vis[sum]){
            sum=x;// start new subsegment
            cnt++;
            vis.clear();
            vis[0]++;
        }
        vis[sum]++;
    }
    cout<<cnt;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
    return 0;


}









