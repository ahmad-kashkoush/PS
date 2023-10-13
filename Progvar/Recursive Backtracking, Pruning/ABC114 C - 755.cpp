//
// Created by ahmedkashkoush on 9/29/23.
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
int n;
string str="357";

bool valid(string ret){
    if(ret.empty())return false;
    if(ret.size()>9)return false;
    bool containAll=(ret.find("7")!=-1);
    containAll=containAll &&(ret.find("5")!=-1);
    containAll=containAll &&(ret.find("3")!=-1);
    if(!containAll)return false;
    int num=stoi(ret);
    return num<=n;
}
int ans=0;
void solve(string ret){
    if(!ret.empty() and stoi(ret)>n)return;
    if(valid(ret)){
//        cout << ret << el;
        ans++;
    }
    for(char i:str) {

        ret+=i;
        if(ret.size()>9)return;
        solve(ret);
        ret.pop_back();
    }
}
int main() {
    judge();
    cin>>n;
    string ret="";
    solve(ret);
    cout<<ans<<el;
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
