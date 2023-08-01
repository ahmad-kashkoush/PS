#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
void solve(){
    int a, b, c;
    // a+c=2b
    cin>>a>>b>>c;
    // a: tmp=2b-c=b-c+b
    int tmp=b-c+b;// to avoid overflow
    bool ok=false;
    if(tmp>=a and tmp%a==0)
        ok=true;
    // b: (a+c)/2--> c+(a-c)/2
    tmp=c+(a-c)/2;
    if(tmp>=b and (a-c)%2==0 and tmp%b==0)
        ok=true;

    // c: tmp=2b-a=b-a+b
    tmp=b-a+b;
    if(tmp>=c and tmp%c==0)
        ok=true;
    cout<<(ok?"YES":"NO");


}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
    }

    return 0;
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
