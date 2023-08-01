//
// Created by ak on 7/23/23.
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
    int n; cin>>n;
    set<pair<deque<int>, deque<int> >> vis;

   int x;cin>>x;
   deque<int> a(x);
   cin(a);
   cin>>x;
   deque<int> b(x);
   cin(b);


   int cnt=0;
    while(!a.empty() and !b.empty() and !vis.count({a, b})){
       vis.emplace(a, b);
       vis.emplace(b, a);
       if(a.front()==b.front()){
           a.pop_front();
           b.pop_front();
       }else if(a.front()>b.front()){
           int tmp1=a.front();
           a.pop_front();
           int tmp2=b.front();
           b.pop_front();
           a.push_back(tmp2);
           a.push_back(tmp1);

       }else {
           int tmp1=b.front();
           b.pop_front();
           int tmp2=a.front();
           a.pop_front();
           b.push_back(tmp2);
           b.push_back(tmp1);
       }
        cnt++;
    }
//    cout(a);
//    cout<<el;
//    cout(b);
    if(!a.empty() and !b.empty())cout<<-1;
    else {
        cout<<cnt<<" ";
        if(a.empty())cout<<2;
        else  if(b.empty())       cout<<1;
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

