//
// Created by ahmedkashkoush on 10/5/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
void solve(){
    int q; cin>>q;
    deque<string> cur;
    cur.push_back("/");
    while(q--){
        string cmd;cin>>cmd;
        if(cmd=="pwd"){
            for(auto dir:cur)cout<<dir;
            cout<<el;
        }
        else{
            string path; cin>>path;
            path+="/";
            string test="";
            if(path.front()=='/')cur.clear();
            for(int i=0;i<path.size();i++){
                // for new directory
                if(path[i]=='/'){
                    if(test=="..")
                        cur.pop_back();
                    else cur.push_back(test+"/");
                    test.clear();
                    continue;
                }
                test+=path[i];
            }

        }

    }
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
    }

    return 0;
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
