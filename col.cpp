//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
        int n, q; cin>>n>>q;
        vector<ll> v(n+1, 0), pre(n+1, 0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            pre[i]=v[i]+pre[i-1];
        }

        for(int i=1;i<=n;i++){
            v[i]=max(v[i],v[i-1]);
        }



        while(q--){
            ll leg;cin>>leg;
            if(leg<v[1])
                cout<<0<<' ';
            else if(leg>=v[n])
                cout<<pre[n]<<" ";
            else{
               auto it=upper_bound(all(v), leg);
               if(*it>leg)it--;
               int id=it-v.begin();
               cout<<pre[id]<<" ";

            }




        }
        cout<<el;


}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)
        solve();
    return 0;

}










