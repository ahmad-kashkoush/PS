//
// Created by ak on 7/31/23.
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
bool isLetter(char c){
    return (c>='a' and c<='z' or (c>='A' and c<='Z') );
}
int main() {
    judge();
    int t=1;
    string s;
    while(getline(cin, s) and !s.empty()){
       int n=s.size();
       int cnt=0;
       for(int i=0;i<n;i++){
           bool ok=false;
            while(i<n and isLetter(s[i]))
                ok=true,i++;
            cnt+=ok;
       }
       cout<<cnt<<el;
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
