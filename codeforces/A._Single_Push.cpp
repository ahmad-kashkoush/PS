//
// Created by ahmed-kashkoush on 2/13/23.
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
void solve() {
    int n; cin>>n;
    vector<int> a(n), b(n);
    cin(a);
    int numbers;
    int cnt=0, prv=0;
    bool ok=true;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]<a[i])
            ok=false;

        if(prv!=b[i]-a[i]){
            cnt++;
            numbers+=(b[i]-a[i]>0);
            prv=b[i]-a[i];
        }
    }
    cout<<(cnt<=3 and numbers<=1 and ok?"Yes":"NO");


}

int main() {
    judge();
    tc();
//    solve();
    return 0;
}
void tc(){
    int t = 1;
    cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        cout<<el;
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