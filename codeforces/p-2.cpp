//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int n; cin>>n;
    char sym;cin>>sym;
    string s; cin>>s;
    if(sym=='g'){
        cout<<0<<el;
        return;
    }
    vector<int> ans;
    bool fixed=false;
    int id=0, cnt=0;
    for(int i=0;i<2*n;i++){
        int j=i%n;
        if(!fixed)id=j;
        if(s[id]==sym)
            fixed=true;
        if(s[j]!='g'&&fixed)
            cnt++;
        else if(fixed){
            ans.push_back(cnt);
            cnt=0;
            fixed=false;
        }

    }
    sort(ans.rbegin(),ans.rend());
    cout<<ans[0]<<el;

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









