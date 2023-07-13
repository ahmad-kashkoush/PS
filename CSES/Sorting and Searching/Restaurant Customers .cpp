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
    int n; cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    sort(a, a+n);
    sort(b, b+n);
    int cur=0, mx=0;
    int l=0, r=0;
    while(l<n){
        if(a[l]<b[r]){
            cur++;
            l++;
        }else{
            cur--;
            r++;
        }
        mx=max(cur, mx);
    }
    cout<<mx;

}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
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
