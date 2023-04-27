//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    map<char, int> mp;
    string s; cin>>s;
    for(auto s:s)mp[s]++;

    int c1=0, c2=0;
   for(char a='a';a<='z';a++){
        if(mp[a]==1)
            c1++;
        else if(mp[a]>0)
            c2++;
   }
   cout<<(c2+c1/2);

    cout<<el;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;


}










