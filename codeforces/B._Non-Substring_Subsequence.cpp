//
// Created by ak on 4/25/23.
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
    int n, q;cin>>n>>q;
    string s; cin>>s;
    while(q--){
        int l, r; cin>>l>>r;
        l--, r--;
        bool before=false, after=false;
        for(int i=0;l!=0 and i<l;i++)
            if(s[i]==s[l])before=true;
        for(int i=r+1;r!=n-1 and i<n;i++)
                if(s[i]==s[r])after=true;
        if(before or after)cout<<"YES";
        else               cout<<"NO";
        cout<<el;


    }

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
