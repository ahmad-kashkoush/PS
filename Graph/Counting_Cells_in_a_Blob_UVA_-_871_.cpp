//
// Created by ak on 7/31/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
#define r first
#define c second
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dx[]={0, 0, 1, -1};
int dy[]={1, -1, 0, 0};
int n, m;
char v[35][35];
bool valid(int r, int c, int n, int m){
    return !(r<0 || r>=n || c<0 || c>=m);
}
int bfs(int i, int j){
    int cnt=0;
    queue<pair<int, int>> q;
    q.emplace(i, j);
//    cout(v);
    while(!q.empty()){
        auto cur=q.front();
        cnt++;
        for(int x=0;x<4;x++){
            int nx=cur.r+dx[x];
            int ny=cur.c+dy[x];
            if(!valid(nx, ny, n, m) or v[nx][ny]=='0')continue;
            q.emplace(nx, ny);
            v[nx][ny]='0';
        }
    }
        return cnt;
}
int main() {
    judge();
    int t=1;
    cin>>t;
    string s;
//    cin.ignore();
    getline(cin, s);
    while(t--) {
        n = 0;
        memset(v, 0, sizeof(v));
        while(gets(v[n])) {
            if(v[n][0] == '\0') break;
            n++;
        }
        m=sizeof(v[0]);

       cout<<"Hello";
       int ans=0;
       for(int i=0;i<n;i++){
           for(int j=0;v[i][j];j++){
               if(v[i][j]=='1'){
                   ans=max(ans, bfs(i, j));
               }
           }
       }
       cout<<ans<<el;
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

