//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int n, x; cin>>n>>x;
    vector<ll> v(n);
    ll sum=0;
    for(auto &i:v){
        cin>>i;
        sum+=i;
    }
    if(sum<x)
        cout<<-1;
    else{
        sum=v[0]+v[1];
        int dis=n, r=1;

        for(int l=0;l<n-1&&r<n;l++){
            while(r<n&&sum<x)
                sum+=v[++r];
            if(sum>=x)
                dis=min(dis, r-l+1);
            sum-=v[l];
        }
        cout<<dis;

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










