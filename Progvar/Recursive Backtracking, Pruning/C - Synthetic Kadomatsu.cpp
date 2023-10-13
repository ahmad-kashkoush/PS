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
int n;
int a, b, c;
vector<int> v;
int solve(int i, int aa, int bb, int cc){
    if(i==n){
        if(min({aa, bb, cc})<=0)return OO;
        return abs(aa-a)+abs(bb-b)+abs(cc-c)-30;// -30 for removing the 10 coins of taking the first element
    }
    int ret=solve(i+1, aa, bb, cc);
     ret=min(ret, solve(i+1, aa+v[i], bb, cc)+10);
     ret=min(ret, solve(i+1, aa, bb+v[i], cc)+10);
     ret=min(ret, solve(i+1, aa, bb, cc+v[i])+10);
     return ret;
}
int main() {
    judge();
     cin>>n;
    v.resize(n);
    cin>>a>>b>>c;
    cin(v);
    cout<<solve(0, 0, 0, 0);

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
