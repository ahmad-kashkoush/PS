//
// Created by ak on 4/8/23.
//https://codeforces.com/contest/236/problem/B
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int mod =1073741824 , OO = 2 * 1e9;
int arr[(int)1e6+10];
int n(int i){
    int x=0;
    for(int j=1;j*j<=i;j++){
        if(i%j==0){
            x++;
            if(i/j!=j)x++;
        }
    }
    return x;

}
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int ans=0;
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            for(int k=1;k<=c;k++) {
                if (arr[i * j * k] == 0)arr[i * j * k] = n(i * j * k);
                ans+=arr[i*j*k];
                ans%=mod;
            }

    cout<<ans%mod;
}
int main() {
    judge();
    int t=1;

    while(t--){
        solve();
        cout<<el;
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
 Mistakes
 1. none
 Learnt
    ! If You are going to use the same value again,
    you can restore it for later instead of doing  operations again
    which will save sometime
 */
