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
    string s; cin>>s;
    if(n&1)return void(cout<<-1);
    map<char, int> fr,pairs;
    for(auto i: s){
        fr[i]++;
        if(fr[i]*2>n)return void(cout<<-1);
    }
    int cnt=0;
    int k=0;
    for(int i=0;i<n;i++){
        int j=n-i-1;
        if(j<=i)break;
        if(s[i]==s[j]){
            cnt++;
            k=max(k,++pairs[s[i]]);
        }
    }
    cout<<max((cnt+1)/2, k);

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
