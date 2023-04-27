//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int a, b; cin>>a>>b;
    string s; cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='?')s[i]=s[n-i-1];
    }
    a-=count(all(s),'0');
    b-=count(all(s),'1');

    for(int i=0;i<=n/2;i++){
        if(i!=n-i-1&&s[i]=='?'){
            if(a>1)s[i]=s[n-i-1]='0',a-=2;
            else if(b>1)s[i]=s[n-i-1]='1',b-=2;
        }

        else if(s[i]=='?'){
            if(a)s[i]='0',a--;
            else if(b) s[i]='1',b--;
        }
    }
    string tmp=s;
    reverse(all(tmp));
    if(s==tmp&&!a&&!b)cout<<s<<el;
    else cout<<-1<<el;

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









