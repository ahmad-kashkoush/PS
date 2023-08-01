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
    string s; cin>>s;int n=(int)s.size();
    if(s[0]==s[n-1])return void(cout<<"NO");
    int open=count(all(s), s[0]);
    int close=count(all(s), s[n-1]);
    int rem=n-open-close;
    if((open+rem)!=close and (close+rem)!=open)
        return void(cout<<"NO");
    int o=1, c=-1, r;
    if(open>close)
        r=-1;
    else
        r=1;
    int check=0;
    for(int i=0;i<n;i++){
        if(s[i]==s[0])
            check++;
        else if(s[i]==s[n-1])
            check--;
        else
           check+=r;
        if(check<0)return void(cout<<"NO");
    }
    cout<<(check!=0?"NO":"YES");
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
