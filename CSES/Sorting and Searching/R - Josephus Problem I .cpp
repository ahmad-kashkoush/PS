//
// Created by ak on 7/13/23.
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
//void solve(){
//    int n; cin>>n;
//    deque<int> st;
//    for(int i=1;i<=n;i++)
//       st.emplace_back(i);
//    int cnt=1;
//    while(!st.empty()){
//        int last;
//        if(st.size()==1)return void(cout<<st.front());
//        int bck=st.back();
//        for(int i=cnt;i<st.size();i+=2){
//            cout<<st[i]<<" ";
//            last=st[i];
//            st[i]=-1;
//        }
//        if(last==bck)cnt=1;
//        else       cnt=0;
//        sort(all(st));
//        while(st.front()==-1)
//            st.pop_front();
//
//    }
//}



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
