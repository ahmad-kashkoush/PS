//
// Created by ak on 4/28/23.
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
    int p=0;
//    Using Math
//    while(n>5*(1<<p))
//        n-=5*(1<<p++);
//    int cnt=0;
//    while(n>(1<<p))n-=(1<<p), cnt++;
    string s[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
//    cout<<s[cnt];

// using Reverse way of thinking
/*  1. let a="Sheldon"
    2. on every round a will be repeated twice the one before
        a--> 1, [6, 8], [16, 17, 18, 19, 20]
        reverse thinking will be :
        if n==20 how to make it 1, 8,
        to get to the previous round divide by 2
        n/=2==10--> is it correct, No so subtract 2
        n=8, correct--> divide by 2 and subtract 2 will always work
*/
    while(n>5)// go to the previous round for same index
        n=n/2-2;
    cout<<s[n-1];
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
