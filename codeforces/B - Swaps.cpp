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
    vector<int> a(n), b(n);
    map<int, int> id;
    for(int i=0;i<n;i++){
        cin>>a[i];
        id[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        id[b[i]]=i;;
    }
    int mnOdd=2*n, ans=2*n;
    for(int i=1;i<=2*n;i++){
        if(i&1) mnOdd=min(mnOdd, id[i]);// minimum id for odd numbers
        else    ans=min(ans, mnOdd+id[i]);
    }
    cout<<ans<<el;
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










