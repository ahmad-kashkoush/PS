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
        int n, m;
        cin>>n>>m;
        queue<int> q;
        vector<int> ids[2*n+10];// vector<vector<topVal>> --> id of cyilinder
        queue<int> cylinder[m];
        for(int i=0;i<m;i++){
            // Enter cylinder
            int k; cin>>k;
            for(int j=0;j<k;j++){
                int a; cin>>a;
                cylinder[i].push(a);
            }
            // tops
            int topVal=cylinder[i].front();
            ids[topVal].push_back(i);
            if(ids[topVal].size()==2)q.push(topVal);
        }
        // update tops
        int ans=0;
        while(!q.empty()){
            int topVal=q.front();
            q.pop();
            ans++;
            for(int i:ids[topVal]){
                cylinder[i].pop();
                if(!cylinder[i].empty()){
                    int ff=cylinder[i].front();
                    ids[ff].push_back(i);
                    if(ids[ff].size()==2)q.push(ff);
                }
            }
        }
        if(ans<n)cout<<"No";
        else    cout<<"Yes";
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
