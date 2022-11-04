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
    if(n%2020==0||n%2021==0){
        cout<<"YES"<<el;
        return;
    }
    if(n%2020>n/2020){
        cout<<"NO"<<el;
        return;
    }
    cout<<"YES";

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










