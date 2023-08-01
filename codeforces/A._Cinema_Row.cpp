//
// Created by ahmed-kashkoush on 2/6/23.
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
    int n; cin>>n;
    vector<int> a(n),l(n), r(n);
    cin>>a[0];
    l[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        l[i]=max(a[i], l[i-1]);
    }

    r[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        r[i]=max(r[i+1], a[i]);
    }

    for(int i=0;i<n;i++){
        int c=a[i];

        if(c>=l[i]&&c>=r[i])
            cout<<"both"<<el;
        else if(c>=l[i])
            cout<<"left"<<el;
        else if(c>=r[i])
            cout<<"right"<<el;
        else
            cout<<"none"<<el;
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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}