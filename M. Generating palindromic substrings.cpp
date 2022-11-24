//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/group/gA8A93jony/contest/269931/problem/M
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
vector<string> v;
void print(string s, int l=0, int r=0){
    if(l>=s.size())
        return;
    if(r>=s.size())
        print(s, l+1, l+1);
     else
        print(s, l, r+1);

    string tmp;
    for(int i=l;i<=r;i++)
        tmp+=s[i];
    string j=tmp;
    reverse(all(j));
    if(tmp==j)
        v.push_back(j);


}
void solve(){
    string s;cin>>s;
    print(s);
    sort(all(v));
    for(auto i:v)
        cout<<i<<el;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
    return 0;


}
