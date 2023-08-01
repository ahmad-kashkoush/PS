//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int n; cin>>n;
    map<int, int> cnt;
    map<int, int> id;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        cnt[x]++;
        id[x]=i+1;
    }
    for(auto i:cnt){
        if(i.second==1){
            cout<<id[i.first]<<el;
            return;
        }
    }
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










