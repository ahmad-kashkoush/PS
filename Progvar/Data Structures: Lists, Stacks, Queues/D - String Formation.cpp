//
// Created by ahmedkashkoush on 10/12/23.
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
    string s; cin>>s;
    deque<char> dq(s.size());
    for(int i=0;i<s.size();i++)
        dq[i]=s[i];
    int q; cin>>q;
    bool rev=false;
    while(q--){
        int t;cin>>t;
        if(t==1)rev=!rev;
        else{
            int f; char c;
            cin>>f>>c;
            if(f==1){
                if(rev)dq.push_back(c);
                else   dq.push_front(c);
            }else{
                if(rev)dq.push_front(c);
                else   dq.push_back(c);
            }
        }
    }
    if(rev){
        for(int i=dq.size()-1;i>=0;i--)
            cout<<dq[i];
    }else{
        for(auto &ch:dq)cout<<ch;
    }
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
