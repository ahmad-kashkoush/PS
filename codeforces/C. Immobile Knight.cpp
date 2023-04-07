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

using namespace std;
void judge();void tc();
bool check(int r, int c, int n, int m){
    if((r-0>=2|| n-1-r>=2) and (c-0>=1 || m-1-c>=1))
        return true;
    if((c-0>=2 or m-1-c>=2) and (r-0>=1 or n-1-r>=1))
        return true;
    return false;
}

void solve() {
    int n, m; cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!check(i, j, n, m)){
                cout<<i+1<<" "<<j+1;
                return;
            }
        }
    }
    cout<<1<<" "<<1;



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