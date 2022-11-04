//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    vector<int> v(n),sorted_v;
    for(auto &i:v)cin>>i;
    vector<int> p(m);
    for(auto &i:p){
        int x; cin>>x;
        i=x-1;
    }
    sorted_v=v;
    sort(all(sorted_v));
    for(int o=0;o<n;o++){
        for(int j=0;j<n;j++){
            for(auto i:p){// o(m)
                if(v[i]>v[i+1])
                    swap(v[i],v[i+1]);
            }
        }
    }
    if(sorted_v==v)
        cout<<"YES";
    else
        cout<<"NO";

    cout<<el;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;


}









