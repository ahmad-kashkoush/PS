// Created by ahmed-kashkoush on 2/15/23.
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

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    map<int, int> frq;
    for(auto &i:a){
        cin>>i;
        frq[i]++;
    }
    if(n==1)cout<< -1;
    else{
        map<int, int> enter, vis;
        vector<int> ans;
        for(int i=0;i<n;i++){


            if(frq[a[i]]!=frq[-a[i]]){
                cout<<"-1";
                return;
            }

            if(a[i]<0){
                if(!enter.count(-a[i])){
//                    cout<<a[i]<<" "<< -a[i]<<el;
//                    cout<<enter[a[i]]<<" "<<enter[-a[i]]<<el;

                    cout<<"-1";
                    return;
                }
                enter[-a[i]]--;
                if(enter[-a[i]]==0)
                    enter.erase(-a[i]);
                vis[a[i]]++;
            }
            else if(a[i]>0){
                if(vis[a[i]]){
                    if(!enter.empty()){
                        cout<<"-1";
                        return;
                    }
                }
                enter[a[i]]++;
                vis[a[i]]++;
            }
            if(enter.empty()) {
                ans.push_back(i + 1);
                vis.clear();
            }
        }
        if(!enter.empty())
        {cout<< -1;return;}

        cout<<ans.size()<<el;
        cout<<ans[0]<<" ";
        for(int i=1;i<ans.size();i++){
            cout<<ans[i]-ans[i-1]<<" ";
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
