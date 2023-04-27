//
// Created by ak on 4/25/23.
//
#include<bits/stdc++.h>
#define el '\n'
using namespace std;
void judge();
void solve(){
    string s; cin>>s;
    int n=(int)s.size();
    if(n==1)return void (cout<<"NET");
    bool Alice=0;
    stack<char>st;
    for(auto c:s){
        if(st.empty() or (!st.empty() and st.top()==c))
            st.push(c);
        else    st.pop(), Alice^=1;
    }
    cout<<(Alice?"DA":"NET");

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

