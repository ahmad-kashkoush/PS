//
// Created by ahmed-kashkoush on 2/18/23.
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

void solve() {
        int n, m; cin>>n>>m;

        vector<int> EleOfId(n+10), IdOfEle(n+10), lowest(n+10), highest(n+10);
        for(int i=1;i<=n;i++)
            lowest[i]=highest[i]=
            EleOfId[i]=IdOfEle[i]=i;

        for(int j=0;j<m;j++){
            int a; cin>>a;
            int cur=a;
            int curId=IdOfEle[cur];
            if(curId==1)continue;

            int Before=EleOfId[curId-1];
            int BeforeId=curId-1;

            // Update Ids
            IdOfEle[cur]--;
            IdOfEle[Before]++;
            // Update Data in ids
            EleOfId[BeforeId]=cur;
            EleOfId[curId]=Before;
            lowest[cur]=min(lowest[cur],IdOfEle[cur]);
            highest[Before]=max(highest[Before],IdOfEle[Before]);
        }
        for(int i=1;i<=n;i++)
            cout<<lowest[i]<<" "<<highest[i]<<el;

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
        cout<<"#tc"<< tc<<":\n ";
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