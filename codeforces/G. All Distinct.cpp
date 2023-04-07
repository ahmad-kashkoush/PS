//
// Created by ahmed-kashkoush on 2/15/23.
//
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
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve1() {
    int n;cin>>n;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x]++;
    }
    int cnt=0;
    int twos=0;
    for(auto &[value, freq]:mp){
        if(freq<=2){
            twos+=freq==2;
            continue;
        }
        cnt+=(freq-((freq&1)?1:2));
        freq-=(freq-((freq&1)?1:2));
        twos+=freq==2;
    }
    cout<<n-((twos+1)/2*2+cnt);

}
void solve(){
    int n; cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        st.insert(x);
    }
    int k=n-(int)st.size();
    if(k%2==0){
        cout<<st.size();
    }
    else cout<<st.size()-1;
}
int main() {
    judge();
    tc();
//    solve();
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
