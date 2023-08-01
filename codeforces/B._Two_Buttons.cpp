
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int MAX=2e7;

void solve1() {
    int n, m; cin>>n>>m;
    int ans=0;
    queue<int> q;
    q.push(n);

    map<int, int> vis;
    vis[n]=0;
    while(!q.empty()){
            int cur = q.front();
            q.pop();
            if(cur==m)break;
            if(cur-1>0 and !vis[cur-1])
                q.push(cur-1), vis[cur-1]=vis[cur]+1;
            if(!vis[cur*2] and cur<m)
                q.push(cur*2), vis[cur*2]=vis[cur]+1;
    }
    cout<<vis[m];


}
void solve(){
    int n, m; cin>>n>>m;
    int cnt=0;
    while(m>n){
        cnt+=1+(m&1);// increase step and 1 if odd
        m=(m+1)/2;
    }
    cout<<n-m+cnt;
}

int main() {
    judge();
//    tc();
//    cout<<"hello";
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
