//
// Created by ak on 4/17/23.
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
//void solve(){
//    string s; cin>>s;
//    reverse(all(s));
//    int n=s.size();
//    int ans=n+10;
//    for(int i=0;i<n;i++){
//        if(s[i]=='0'){
//            auto j=find(s.begin()+i+1, s.end(), '0');
//            int r=(j!=s.end()?j-s.begin():n+10);
//           ans=min(ans, r-1);
//           j=find(s.begin()+i, s.end(), '5');
//           r=(j!=s.end()?j-s.begin():n+10);
//           ans=min(ans, r-1);
//        }else if(s[i]=='5'){
//            auto j=find(s.begin()+i+1, s.end(), '7');
//            int r=(j!=s.end()?j-s.begin():n+10);
//            ans=min(ans, r-1);
//            j=find(s.begin()+i+1, s.end(), '2');
//            r=(j!=s.end()?j-s.begin():n+10);
//            ans=min(ans, i+r-i-1);
//        }
//    }
//    cout<<ans<<el;
//
//}
// --------_> People solution
void solve(){
    string s; cin>>s;
    int n=s.size();
    int ans=n+10;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((10*(s[i]-'0')+s[j]-'0')%25==0)
                ans=min(ans, n-i-2);// d1d2d3d4s[i]...s[j]...--> remove ...
        }
    }
    cout<<ans<<el;
}
int main() {
    judge();
    int t=1;
    cin>>t;
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
