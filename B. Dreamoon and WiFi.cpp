
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    string a, b; cin>>a>>b;
    int dis=count(all(a), '+')-count(all(a), '-'),
        c=count(all(b),'+')-count(all(b), '-'),
        q=count(all(b),'?');
    int ans=0;
    for(int i=0;i<(1<<q);i++){
        int ways=c;
        for(int j=0;j<q;j++){
            if((i>>j)&1)
                ways++;
            else ways--;
        }
        ans+=(ways==dis);
    }
    cout<<fixed<<setprecision(12);
    cout<<(double)ans/(1<<q);





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










