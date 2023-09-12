//
// Created by ak on 9/4/23.
//
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
    string s=" ";
    string tmp;cin>>tmp;
    s+=tmp;
    int a[(int)s.size()+1], b[(int)s.size()+1];
    a[0]=0;b[0]=0;
    for(int i=1;i<s.size();i++){
        a[i]=a[i-1]+(s[i]=='a');
        b[i]=b[i-1]+(s[i]=='b');
    }
    int ans=0;
//    cout<<s;
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int cur=0;
            cur=b[j]-b[i];
            cur+=a[i];
            cur+=a[n-1]-a[j];
            ans=max(cur, ans);
        }
    }
    cout<<ans;

}
void solve2(){
    string s; cin>>s;
    int a=0, ab=0, aba=0;
    for(char c:s){
        if(c=='a')
            a++, aba++;
        else   ab++;
        ab=max(a, ab);
        aba=max(aba, ab);
    }
    cout<<aba;
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve2();
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

