//
// Created by ahmed-kashkoush on 2/20/23.
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
    int n, m, k; cin>>n>>m>>k;
    map<pair<int, int>, string> vis;
    map<string, pair<int, int>> mp;
    while(k--){
        string com;
        cin>>com;
        if(com=="+1"){
            int x, y; cin>>x>>y;
            string name;cin>>name;
            while(vis[{x, y}]!="" and x<=n and y<=m){
                if(y+1<=m)y++;
                else x++, y=1;
            }
            if(x-1>=n  )continue;
            vis[{x, y}]=name;
            mp[name]={x, y};
        }else{
            string name; cin>>name;
            if(mp.count(name)){
                cout<<mp[name].first<<" "<<mp[name].second;
                vis.erase({mp[name].first, mp[name].second});
                mp.erase(name);
            }else
                cout<<"-1 -1";
            cout<<el;
        }
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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

}
