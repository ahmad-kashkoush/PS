//
// Created by ahmed-kashkoush on 1/22/23.
//
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

void judge();

void tc();

const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve() {
    int n, s; cin>>n>>s;
    vector<ll> pre(n+10, 0), a(n+10, INT32_MIN);
    bool once=true, possible=true;

    for(int i=n-s+1;i<=n;i++){
        cin>>pre[i];
        if(once){
            once=false;
            continue;
        }
        a[i]=pre[i]-pre[i-1];
        if(a[i]<a[i-1])
            possible=false;

    }
    if(s==1){
        cout<<"Yes";
        return;
    }
    if(!possible){
        cout<<"NO";
        return;
    }

    for(int i=n-s+1;i>1;i--){
        a[i]=a[i+1];
        pre[i-1]=pre[i]-a[i];
    }
    a[1]=pre[1];
    for(int i=1;i<n;i++){
        if(a[i+1]<a[i]){
            cout<<"No";
            return;
        }
    }
    cout<<"YES";





}

int main() {
    judge();
    tc();
//    solve();
    return 0;
}

void tc() {
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
//        cout<<"#tc"<< tc<<": ";
        solve();
//            cout<<endl;
        cout<<el;
    }
}

void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("intput.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}