//
// Created by ak on 4/16/23.
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
char face(char c){
    if(c=='R')return 'B';
    return 'R';
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    char a, b;
    for(int i=0;i<n;i++){
        int j=i;
        while(j<n and s[j]=='?')j++;
        if(j<n and ((j-i)&1))a=face(s[j]);
        else if(j<n) a=s[j];
        else {
            if(i==0)a='R';
            else a=face(s[i-1]);
        }
        b=face(a);
        while(s[i]=='?'){
            s[i]=a;
            swap(a, b);
            i++;
        }
    }
    cout<<s<<el;
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
