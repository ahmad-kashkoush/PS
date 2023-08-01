//
// Created by ak on 6/29/23.
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
void solve() {
    string s;
    cin >> s;
    set<char> available, digits = {'0', '5'};
    reverse(all(s));
    for (int i = 0; i < (int) s.size(); i++) {
        if (((s[i] == '7' or s[i] == '2') and available.count('5'))
            or ((s[i] == '5' or s[i] == '0') and available.count('0'))) {
            return void(cout<<i-1<<el);
        }
        if (digits.count(s[i]))available.emplace(s[i]);
    }

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
