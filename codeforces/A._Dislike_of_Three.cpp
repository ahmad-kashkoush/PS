//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    vector<int> v;
    for(int k=1;v.size()<1050;k++){
        bool ok=true;
        int n=k;
        if(n%3==0||n%10==3)
            ok=false;
        if(ok)v.push_back(k);
    }

    int t; cin>>t;
    while(t--){
        int k; cin>>k;
        cout<<v[k-1]<<el;
    }

    cout<<el;
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










