//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
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
const int MAX=1000;
 int mem[MAX];
 vector<vector<int>> books;
 int n, shw;
 int minHeight(int idx){
     if(idx>=n)
         return 0;
     int &ret=mem[idx];
     if(ret!=-1)return ret;
     ret=OO;
     int total_width=0, mx_height=0;
     for(int i=idx;i<n;i++){
          total_width+=books[i][0];
          mx_height=max(mx_height, books[i][1]);
          if(total_width>shw)
              break;
          ret=min(ret, mx_height+minHeight(i+1));
     }
     return ret;
 }
void solve() {
    cin>>n>>shw;
    books= vector<vector<int>>(n, vector<int>(2));
    for(auto &book:books)
        cin>>book[0]>>book[1];// width, height;
    cout<<minHeight(0);
}

int main() {
    judge();
//    tc();
    memset(mem, -1, sizeof(mem));
    solve();
    return 0;
}

void tc() {
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        //cout<<el;
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