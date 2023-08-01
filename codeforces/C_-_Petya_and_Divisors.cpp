//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
vector<int> div(int n){
    ll ans=0;
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.emplace_back(i);

            if(n/i!=i)
                v.emplace_back(n/i);
        }
    }

    return v;

}
void solve(){
        int ans=0;
        int n; cin>>n;
        map<int, int> vis;
        for(int j=1;j<=n;j++){
            int y, x;
            cin>>x>>y;
            vector<int> v=div(x);
            int ans=0;
            for(int i=0;i<v.size();i++){
                if(!vis[v[i]])
                    ans++;
                else{
                    int dis=abs(j-vis[v[i]]);
                    if(dis>y)ans++;
                }
                vis[v[i]]=j;

            }
            cout<<ans<<el;


        }
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










