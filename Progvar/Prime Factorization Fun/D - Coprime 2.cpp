////
//// Created by ak on 5/5/23.
////https://atcoder.jp/contests/abc215/tasks/abc215_d
//#include<bits/stdc++.h>
//#define el '\n'
//#define ll long long
//#define reset(v, d) memset(v, d , sizeof(v))
//#define all(s)  s.begin(), s.end()
//#define cin(v)  for(auto &i:v)cin>>i
//#define cout(v) for(auto i:v)cout<<i<<el
//using namespace std;
//void judge();
//const int mod = 1e9 + 7, OO = 2 * 1e9;
//const double pi = 3.1415926535897932384;
//const int N=1e5+10;
//void solve(){
//    int n, m; cin>>n>>m;
//    set<int> arr;
//    for(int i=0;i<n;i++){
//        int x; cin>>x;
//        arr.emplace(x);
//        for(int j=2;j*j<=x;j++){
//            while(x%j==0){
//                arr.emplace(x);
//                arr.emplace(j);
//                x/=j;
//            }
//        }
//        if(x!=1)arr.emplace(x);
//    }
////    cout(arr);
//    int Take[N+1];
//    reset(Take, 0);
//    for(auto i:arr){
//        if(i==1 or Take[i])continue;
//        Take[i]++;
//        for(int j=i*i;j<=m;j+=i) {
//            Take[j]++;
//        }
//    }
////    for(int i=0;i<=m;i++)cout<<Take[i]<<" ";
//    vector<int> ans;
//    for(int i=1;i<=m;i++)
//        if(!Take[i])ans.emplace_back(i);
//    cout<<ans.size()<<el;
//    cout(ans);
//
//
//}
//int main() {
//    judge();
//    int t=1;
////    cin>>t;
//    while(t--){
//        solve();
//    }
//
//    return 0;
//}
//
//void judge() {
//    ios::sync_with_stdio(0);
//    cin.tie(NULL);
//    cout.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    freopen("error.txt", "w", stderr);
//#endif
//}

//
// Created by ak on 5/5/23.
//https://atcoder.jp/contests/abc215/tasks/abc215_d
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<el
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
const int N=1e5+10;
void solve(){
    int n, m; cin>>n>>m;
    set<int> arr;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        arr.emplace(x);
        for(int j=2;j*j<=x;j++){
            while(x%j==0){
                arr.emplace(j);
                x/=j;
            }
        }
        if(x!=1)arr.emplace(x);
    }
//    cout(arr);
    int Take[N+1];
    reset(Take, 0);
    for(auto i:arr){
        if(i==1 or Take[i])continue;
        Take[i]++;
        for(int j=i;j<=N;j+=i) {
            Take[j]++;
        }
    }
//    for(int i=0;i<=m;i++)cout<<Take[i]<<" ";
    vector<int> ans;
    for(int i=1;i<=m;i++)
        if(!Take[i])ans.emplace_back(i);
    cout<<ans.size()<<el;
    cout(ans);


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

