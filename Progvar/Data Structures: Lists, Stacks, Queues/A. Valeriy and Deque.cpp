//
// Created by ahmedkashkoush on 10/5/23.
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
    int n, q;
    cin>>n>>q;
    deque<int> dq(n), cpy(n);
    int mxId=0;
    for(int i=0;i<n;i++){
        cin>>dq[i];
        if(dq[i]>dq[mxId])mxId=i;
    }
    cpy=dq;
    // preprocess answer
    map<int, pair<int, int>> mp;
    for(int i=1;cpy.front()!=dq[mxId];i++){
        int a=cpy.front();
        cpy.pop_front();
        int b=cpy.front();
        cpy.pop_front();
        //
        mp[i]=make_pair(a, b);
        if(a<b)swap(a, b);
        //
       cpy.push_front(a);
       cpy.push_back(b);
    }
    while(q--){
        ll op;cin>>op;
        if(op<=mxId)
            cout<<mp[op].first<<" "<<mp[op].second;
        else
            cout<<dq[mxId]<<" "<<cpy[(op-(mxId+1))%(n-1)+1];

        cout<<el;
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
