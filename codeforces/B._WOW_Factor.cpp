//
// Created by ak on 1/30/2023.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;

void judge();


void solve() {
        string tmp; cin>>tmp;
        string s=" ";
        s+=tmp;
        string wow=" ";
        for(int i=1;i<s.size();i++){
            if(s[i]=='v'&&s[i-1]=='v')
                wow+='w';
            else if(s[i]=='o')
                wow+='o';
        }
        wow+=" ";
        vector<ll> pre(wow.size(), 0);
        vector<ll> suff(wow.size(), 0);
        for(int i=1;i<wow.size();i++)
            pre[i]+=(wow[i]=='w')+pre[i-1];
        for(int i=(int)wow.size()-2;i>=0;i--)
            suff[i]+=(wow[i]=='w')+suff[i+1];
       ll ans=0;
       for(int i=0;i<wow.size();i++){
           if(wow[i]=='o')
               ans+=suff[i]*pre[i];
       }
       cout<<ans<<el;

}

int main() {
    judge();
//    tc();
    solve();
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
