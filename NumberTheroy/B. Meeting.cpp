//
// Created by ak on 4/8/23.
//https://codeforces.com/contest/144/problem/B

#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
int x[1005], y[1005], r[1005], n;
bool check(int a, int b){
    for(int i=0;i<n;i++){
        int c=x[i]-a;c*=c;
        int d=y[i]-b;d*=d;
        if(c+d<=r[i]*r[i])return 0;
    }
    return 1;
}
void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d>>n;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i]>>r[i];
    // loop on width
    int blanket=0;
    for(int i=min(a, c);i<=max(a, c);i++)
        blanket+=check(i, b)+check(i, d);
    for(int i=min(b, d)+1;i<max(b, d);i++)
        blanket+=check(a, i)+check(c, i);

    cout<<blanket;



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
/*
    -mistake
        1. rushed to the solution
        2. didn't write what i understand first and then come to the hardest parts
        3. thought of a topic and tryed to force it on the problem
        4. made wrong assumptions about constraints
 */

