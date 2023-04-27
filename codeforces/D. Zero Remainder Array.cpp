//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/contest/1374/problem/D
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
/*
What is the idea?
[need] make the array %k=0;
[solution]
1. get max frequency of remainder--> because I can't add same x to multiple remainders
2. get max remainder
3. number of cycles is = k*(max_frequency of remainder-1)
4. this way I need just to add the max_remainder that have max_frequency and increment x by 1
5. the equation
    let frequency: f
    let remainder: z
    ans=k*(max(f)-1)+(max(z) that have max(f))+1
*/

void solve(){
    int n,k;
    cin>>n>>k;
    map<int, int> cnt;
    int mx=0;
    while(n--){
        int x;cin>>x;
        if(x%k!=0)
            mx=max(mx, ++cnt[k-x%k]);
    }
    ll ans=0;
    for(auto [z, f]: cnt){
        if(f==mx)
            ans=(ll)k*(f-1)+(ll)z+(ll)1;
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
