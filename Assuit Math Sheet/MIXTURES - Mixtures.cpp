//
// Created by ak on 4/10/23.
//https://www.spoj.com/problems/MIXTURES/
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
int n;
int arr[101];
ll dp[101][101];
ll Sum(int st, int ed){
    ll ans=0;
    for(int i=st;i<=ed;i++){
        ans=(ans+arr[i])%100;
    }
    return ans;
}
ll rec(int i, int j){
    if(i>=j)return 0;
    ll &ret=dp[i][j];
   if(~ret)return ret;
   ret=INT_MAX;
    for(int k=i;k<=j;k++){
        ll smoke=Sum(k+1, j)*Sum(i, k);

        smoke+=rec(k+1, j);
        smoke+=rec(i, k);
        ret=min(ret, smoke);
    }
    return ret;

}
int main() {
    judge();
    int t=1;

    while(cin>>n){
        for(int i=0;i<n;i++)cin>>arr[i];
//        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        reset(dp, -1);

        cout<<(n>2?rec(0, n-1):arr[0]*arr[1])<<endl;
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

/*
  (A B| c) d|  e f g
   a b, c, d
   abx + cd --> a*b*x+ c*d +(a+b+x)%100*(c+d)%100
   abc+ d

 */