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

    int n; cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;

    int l=0, r=n-1;
    ll ans=0;
    ll a=v[l], b=v[r];
    while(l<r){
        if(a==b){
            ans=a;
            b+=v[--r];
            a+=v[++l];
        }else if(a<b)
            a+=v[++l];
        else
            b+=v[--r];
    }
    cout<<ans;

}









