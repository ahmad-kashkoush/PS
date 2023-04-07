// Created by ahmed-kashkoush on 2/6/23.
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int mod = 1e9 + 7, OO = 2 * 1e9;
int countDigits(ll n){
    int cnt=0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}

void solve() {
      ll n; cin>>n;
        ll ans=OO;
        for(ll i=1;i<=sqrt(n);i++){
            if(n%i==0){
                int f=max(countDigits(n/i), countDigits(i));
                ans=(ans>f?f:ans);
            }
        }
        cout<<ans;

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}
void tc(){
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        //cout<<el;
    }
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
