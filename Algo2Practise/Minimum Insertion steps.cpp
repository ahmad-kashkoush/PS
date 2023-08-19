//
// Created by ahmed-kashkoush on 2/2/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
/*
 [need]
- minimum operations to form palindrome
 [how]
    1. we compare out-->in
        -if same i++, j--
        -else  :
            > (i+1, j)+1
            > (i, j+1)+1
            maximize
 */
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int mod = 1e9 + 7, OO = INT_MAX;
const int MAX=501;
 int mem[MAX][MAX];
 int mnOp(string s, int i, int j){
     if(i>=j)
         return 0;
     int &ret=mem[i][j];
     if(ret!=-1)return ret;
     ret=OO;
     if(s[i]==s[j])
         return ret=mnOp(s, i+1, j-1);
     return ret=min(1+mnOp(s, i+1, j), 1+mnOp(s, i, j-1));

 }
void solve() {
    string s; cin>>s;
    for(auto &i:mem)
        memset(i, -1, sizeof(i));
    cout<<mnOp(s, 0, (int)s.size()-1);

}

int main() {
    judge();
    tc();
//    cout<<"Hello";
//    solve();
    return 0;
}

void tc() {
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        cout<<el;
    }
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
