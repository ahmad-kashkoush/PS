//
// Created by ak on 4/12/23.
//https://codeforces.com/problemset/problem/1550/A
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
    int s; cin>>s;
    int sum=0, cnt=1, prv=1;
    s-=1;
    while(s>0){
        if(s-(prv+2)>=0)
            s-=prv+2, prv+=2;
        else if(s-(prv+1)>=0)
            s-=prv+1, prv+=1;
        else
            s=0;
        cnt++;
//        cout<<prv<<" ";
    }
    cout<<cnt<<el;
}
void solve2(){
    int n; cin>>n;
    int s=1;
    int cnt=0;
    while(n>0){
        n-=s;
        s+=2;
        cnt++;

    }
    cout<<cnt<<el;
}
int main() {
    judge();
    int t=1;
    cin>>t;
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

