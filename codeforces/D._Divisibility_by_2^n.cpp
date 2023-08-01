//
// Created by ahmed-kashkoush on 1/22/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;

void judge();

void tc();

const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int n2(int n){
    int ret=0;
    while(!(n&1))n/=2, ret++;
    return ret;
}
void solve() {
    int n; cin>>n;
    int x=0;
    vector<int> v;
//    cout<<"Hello";
    for(int i=1;i<=n;i++){// o(n)
        int in;cin>>in;
        x+=n2(in);// o(log(in)
        if(!(i&1))
            v.push_back(n2(i));// o(log(n)
    }



    sort(all(v));
    int ans=0;
    while(!v.empty()&&x<n) {
            x+=v.back();
            v.pop_back();
           ans++;

       }
       cout<<(x>=n?ans:-1);



}

int main() {
    judge();
    tc();
//    solve();
    return 0;
}

void tc() {
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
//        cout<<"#tc"<< tc<<": ";
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
    freopen("intput.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}