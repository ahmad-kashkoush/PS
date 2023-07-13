//
// Created by ak on 7/12/23.
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
int main() {
    judge();
    ll x, n;
    cin>>x>>n;
    set<ll> st;// set<positions>
    st.emplace(0);//
    st.emplace(x);
    multiset<ll> length;
    length.emplace(x-0);
    while(n--){
        ll p; cin>>p;
        st.emplace(p);
        auto it=st.find(p);
        ll l=*(--it);
        it++;
        ll r=*(++it);
        length.erase(length.find(r-l));
        length.emplace(r-p);
        length.emplace(p-l);
//        cout<<l<<" "<<p<<" "<<r<<el;
        cout<<*length.rbegin()<<" ";
//        cout(length);
//        cout<<el<<el;

    }
//    cout<<el;
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
