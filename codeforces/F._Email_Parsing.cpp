// Created by ahmed-kashkoush on 2/6/23.
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
void judge();void tc();
bool alph(string a){
    if(a.empty())
        return false;
   for(auto i:a){
       if(!((i>='a'&&i<='z')||(i>='A'&&i<='Z')||(i>='0'&&i<='9')))
           return false;
   }
   return true;
}
void solve() {
        string email;cin>>email;
        int at=email.find("@");
        int dot=email.find(".");
        if(at==-1||dot==-1||dot<=at) {
            cout << "NO";
            return;
        }
        string a, b, c;
        a=email.substr(0, at);
        b=email.substr(at+1, dot-at-1);
        c=email.substr(dot+1);
//        cout<<a<<" "<<b<<" "<<c<<" ";
        cout<<((!alph(a)||!alph(b)||!alph(c))?"NO":"Yes");

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}
void tc(){
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
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