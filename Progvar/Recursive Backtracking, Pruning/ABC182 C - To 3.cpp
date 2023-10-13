//
// Created by ahmedkashkoush on 10/2/23.
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
string input;
bool valid(string str){
    if(str.empty())return false;
    int sum=0;
    for(char i:str)sum+=i-'0';
    return sum%3==0;
}
int ans=-1;
void rec(int i, string ret){
    if(i>(int)input.size())return;
    if(valid(ret)){
        ans=max((int)ret.size(), ans);
//       cout<<ret<<el;
    }
    // take

    rec(i+1, ret+input[i]);
    rec(i+1, ret);
}
int main() {
    judge();
    cin>>input;
    string st;
    rec(0, st);
    if(ans==-1)cout<<ans;
    else    cout<<input.size()-ans;

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
