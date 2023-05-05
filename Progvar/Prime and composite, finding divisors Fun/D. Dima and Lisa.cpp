//
// Created by ak on 4/29/23.
//https://codeforces.com/problemset/problem/584/D
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
bool prime(int n){
    if(n==2)return true;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return false;
    return true;
}
void solve(){
    int n; cin>>n;
    // 3 5 7 are odd
    if(n<=7)cout<<"1\n"<<n;
    else{
        cout<<"3\n";
        n-=3;
        for(int i=3;;i+=2){
            if(prime(i) and prime(n-i))
                return void(cout<<3<<" "<<i<<" "<<n-i);
        }
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
