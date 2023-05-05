//
// Created by ak on 4/13/23.
//https://www.hackerrank.com/challenges/number-groups/problem
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
long sumOfGroup(int k) {
    // Return the sum of the elements of the k'th group.
    long long Index=(long long)k*(k+1)/2;
    long long lastNumber=2*Index-1;
    long sum=0;
    while(k--){
        sum+=lastNumber;

        lastNumber-=2;
    }
    return sum;

}
int main() {
    judge();
    int t=1;
    while(cin>>t){
        if(t==-1)break;
        cout<<sumOfGroup(t)<<el;
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


