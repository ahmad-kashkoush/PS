//
// Created by ahmedkashkoush on 9/11/23.
//https://codeforces.com/group/u3Ii79X3NY/contest/270796/problem/K
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
vector<pair<ll, ll>> v;
void updateRange(pair<ll, ll> p){
    int l=0, r=v.size()-1;
    int starter=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid].first>p.first)r=mid-1;
        else   l=mid+1, starter=mid;
    }
    if(starter!=-1 and p.first<=v[starter].second){
        v[starter].first=min(p.first, v[starter].first);
        v[starter].second=max(p.second, v[starter].second);
    }else
        v.push_back(p);
}
int main() {
    judge();
    int m, n; cin>>m>>n;
    vector<pair<ll, ll>> shipRange(m);
    for(auto &[l, r]:shipRange)cin>>l>>r;
    sort(all(shipRange));
    for(auto [l, r]:shipRange){
        if(v.empty())v.emplace_back(l, r);
        else    updateRange(make_pair(l, r));
    }
    int q; cin>>q;
    while(q--){
        int a, b; cin>>a>>b;
        if(a>b)swap(a, b);
        int l=0, r=v.size()-1, res=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid].first>a)r=mid-1;
            else    res=mid, l=mid+1;
        }
        if(res!=-1 and b<=v[res].second)cout<<"YES"<<el;
        else                            cout<<"NO"<<el;


    }
//    for(auto i:v){
//        cout<<i.first<<" "<<i.second<<el;
//    }
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

