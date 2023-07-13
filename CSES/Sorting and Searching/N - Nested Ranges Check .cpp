//
// Created by ak on 7/2/23.
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
bool cmp(pair<int, int> &a, pair<int, int> &b){
    if(a.first==b.first)
        return !(a.second<b.second);
    return !(a.first>=b.first);
}
void solve(){
    int n; cin>>n;
    vector<pair<int, int>> p(n), p2(n);
    for(auto &[a, b]:p)
        cin>>a>>b;
    p2=p;
    sort(all(p), cmp);
    map<pair<int, int>, int> contain, contained;
    int end=0;
    for(int i=0;i<n;i++){
        if(p[i].second<=end)
            contained[p[i]]=1;
        end=max(p[i].second, end);
    }
    end=OO;// gaurantee a<=c, I need to gaurantee b>=d[e]
    for(int i=n-1;i>=0;i--){
        if(p[i].second>=end)
            contain[p[i]]=1;
        end=min(end, p[i].second);
    }
    for(auto p: p2)cout<<contain[p]<<" ";
    cout<<el;
    for(auto p:p2)cout<<contained[p]<<" ";


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
