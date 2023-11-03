//
// Created by ahmedkashkoush on 10/16/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
#define a first
#define b second
using namespace std;
void judge();
set<pair<int, int>> vis;// startRow, startCol
map<ll, ll> mp;//numOfPaintedCells, numOfNum
set<pair<int, int>> cell;
ll h, w, n;
int dx[]={-2, -2, -2, -1, -1, -1, 0, 0, 0};
int dy[]={-2, -1, 0, -2, -1, 0, -2, -1, 0};

void countSubs(pair<int, int> c) {
//    cout<<c.a<<" "<<c.b<<"-------------------------"<<el;
    for (int startRow = c.a - 2; startRow <= c.a; startRow++) {
        for (int startCol = c.b - 2; startCol <= c.b; startCol++) {
//      for(int xx=0;xx<9;xx++){
//            int startRow = dx[xx] + c.a;
//            int startCol = dy[xx] + c.b;
            // validate row, col
            if (!(startRow >= 1 and startRow <= h - 2 and startCol >= 1 and startCol <= w - 2))
                continue;
            pair<int, int> diamensials = {startRow, startCol};
            if (vis.count(diamensials))continue;


            // loop through dimeisans and count
            ll numOfPainted = 0;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    numOfPainted += cell.count({i + startRow, j + startCol});
            mp[numOfPainted]++;
            vis.emplace(diamensials);
        }
    }
}


void solve(){
    cin>>h>>w>>n;
    for(int i=0;i<n;i++){
       int a, b;cin>>a>>b;
       cell.emplace(a, b);
    }
    for(auto entry:cell){
        countSubs(entry);
    }
    mp[0]=(h-2LL)*(w-2LL);
    for(int i=1;i<=9;i++)mp[0]-=mp[i];
    for(int j=0;j<=9;j++){
        cout<<mp[j]<<el;
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

