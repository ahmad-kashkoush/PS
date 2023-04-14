#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
/*
 -**Upsove
 -Q What I Understand?
    1. You've arr[n]:[0, n-1]
    2. You must sort it in a way that:
        arr[i]+i==NumberHasRoot[e.g. 4, 9, 16 ...]
    3. I there's no answer print -1;
 -Q How to Solve it?
    1. First, [k, 2k] must have perfect square number
    2. to get it --> PS=sqrt(2*k)*sqrt(2*k)
    3. fill numbers from range [2*k-PS, 2*k]
    4. the 2*k=k, and do what you've done again











    5--> |0 1 2 3 4|
          4 3 2 1 0
    6--> 0 |1 2 3 |4 5
         0  3 2 1  5 4

     7--> |0 1 |2 |3 4 5 6
           1 0  2  6 5 4 3

    int l=4-4=0

    l=16-9-->8
  */
const int Size=1e5;
int arr[Size];
void rec(int r){
    if(r<0)return ;
    int s=sqrt(2*r);
    s*=s;
    int l=s-r;
    rec(l-1);
    for(;l<=r;l++, r--)
        arr[l]=r, arr[r]=l;

}
void solve(){
    int n; cin>>n;
    rec(n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<el;

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
