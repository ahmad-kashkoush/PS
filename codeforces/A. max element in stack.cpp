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



void solve() {
    int n; cin>>n;
    map<ll, ll> frq;
    priority_queue<ll> pq;
    stack<ll> st;
    while(n--){
        int cmd;cin>>cmd;
        if(cmd==1){
            ll num;cin>>num;
            frq[num]++;
            pq.push(num);
            st.push(num);
        }else{
            frq[st.top()]--;
            st.pop();
        }
        while(!pq.empty() and frq[pq.top()]==0)
            pq.pop();
        cout<<pq.top()<<el;
    }

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}
void tc(){
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        //cout<<el;
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