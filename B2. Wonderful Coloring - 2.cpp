//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int n, k; cin>>n>>k;
    vector<pair<int, int> > b(n);
    map<int, int> frq;
    int cnt=0;// cnt will equal the total number of occurences
    for(int i=0;i<n;i++){
       int x; cin>>x;
        if(frq[x]++<k)
            b[cnt++]={x, i};
    }
    sort(b.begin(),b.begin()+cnt);
    map<int, int> ans;
    for(int i=0;i<cnt-cnt%k;i++)
        ans[b[i].second]=i%k+1;

   for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
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









