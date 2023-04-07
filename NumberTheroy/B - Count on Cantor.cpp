//
// Created by ak on 4/7/23.
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
void solve(int t){
    int nem=1, dem=1, terms=1;
    while(terms<t){
        dem++;terms++;
        if(terms==t)break;
        while(terms<t and dem>1)
            dem--, terms++, nem++;
        if(terms==t)break;
        terms++, nem++;
        if(terms==t)break;
        while(terms<t and nem>1)
            terms++, nem--, dem++;

    }
    cout<<"TERM "<<t<<" IS "<<nem<<"/"<<dem;



}
const int MAX=1e7+10;
int main() {
    judge();
    int arr[1e7]
    while(cin>>t){
        solve(t);
        cout<<endl;
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

