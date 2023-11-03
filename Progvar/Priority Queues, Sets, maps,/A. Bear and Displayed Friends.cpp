//
// Created by ahmedkashkoush on 10/16/23.
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
    int n, k, q; cin>>n>>k>>q;
    vector<int> v(n);
    cin(v);
    set<pair<int, int>> st;// val, id;
    while(q--){
        int type, id;cin>>type>>id;
        id--;
        if(type==1) {
            st.emplace(v[id], id);
            if(st.size()>k)st.erase(st.begin());
        }else{
            if(st.count({v[id], id}))cout<<"YES";
            else                    cout<<"NO";
            cout<<el;
        }

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
