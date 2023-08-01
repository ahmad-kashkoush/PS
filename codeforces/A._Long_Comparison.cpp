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
void solve(){
    string x1, x2;
    int p1, p2;
    cin>>x1>>p1>>x2>>p2;
    int x1length=(int)x1.size()+p1, x2length=(int)x2.size()+p2;
    if(x1length>x2length)
        cout<<">";
    else if(x1length<x2length)
        cout<<"<";
    else{
       while(!x1.empty() and x1.back()=='0')p1++, x1.pop_back();// 100 2--> 1 4
       while(!x2.empty() and x2.back()=='0')p2++, x2.pop_back();
       for(int i=0;i<max(x1.size(), x2.size());i++){
           char char1=(i<x1.size()?x1[i]:'0');
           char char2=(i<x2.size()?x2[i]:'0');
           if(char1>char2)
               return void(cout<<">");
           if(char1<char2)
               return void(cout<<"<");

       }
       cout<<"=";
    }

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

