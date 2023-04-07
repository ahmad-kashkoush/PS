
// Created by ahmed-kashkoush on 2/9/23.
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
    vector<string> v(n);
    map<string, int> frq;
    int cnt=0;
    vector<vector<int>>f(4, vector<int>(26));
    for(auto &i:v){// o(10*4)
        cin>>i;
        frq[i]++;
        cnt+=(frq[i]>1);
        for(int j=0;j<4;j++){
            f[j][i[j]-'0']++;
        }
    }
    cout<<cnt<<el;
    int ans=0;
    for(auto s:v){//o(10*4*9)
        if(frq[s]>1) {
            frq[s]--;
            for (int i = 0; i < 4; i++) {
                bool ok = false;
                for (int j = 0; j <= 9; j++) {
                    if (f[i][j] == 0) {
                        f[i][j]++;
                        s[i] = j + '0';
                        ans++;
                        ok = true;
                        break;
                    }
                }
                if (ok)break;
            }
        }
        cout<<s<<el;
    }


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
//        cout<<el;
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