//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int n, s; cin>>n>>s;
    vector<int> v(n);
    for(auto &v:v)cin>>v;

    int val=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        while(v[i]-v[val]>s)
            val++;
        ans+=(ll)(i-val-1)*(i-val)/2;
    }
    cout<<ans;
}









