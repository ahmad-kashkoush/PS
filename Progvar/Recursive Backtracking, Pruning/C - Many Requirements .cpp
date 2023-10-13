//
// Created by ahmedkashkoush on 10/2/23.
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
int n, m, q;
vector<int> A;
vector<int> a, b, c, d;
ll score(){
    ll ans=0;
    for(int i=0;i<q;i++){
        if(A[b[i]]-A[a[i]]==c[i])ans+=d[i];
    }
    return ans;
}
ll ans=0;
void rec(int i){
    if(i<=n){
        for(int j=A[i-1];j<=m;j++){
            A[i]=j;
            rec(i+1);
        }
    }else{
        ans=max(score(), ans);
    }

}
int main() {
    judge();
    cin>>n>>m>>q;
    for(int i=0;i<q;i++){
        int aa, bb, cc, dd;
        cin>>aa>>bb>>cc>>dd;
        a.push_back(aa);b.push_back(bb);
        c.push_back(cc);d.push_back(dd);
    }
    A.resize(n);
    A[0]=1;
    rec(1);
    cout<<ans;

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
