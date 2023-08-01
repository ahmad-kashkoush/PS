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
/*
 * Problem: He gives me two arrays a, b
 I can do operations
    -order elements before b[i]
    [need]
    - Wants me to do the minimum number of operations to do so
    [intuition]
    - I can first search for b[i]
    - I found it then all elements before it must be ordered based
    on b
    - I will search for b[i+1]
    - I found it then all elements between pos[b[i]] to i+1 must be ordered
    [Sol]
    -store indexes of array a[n]
    - create two variables lst pos[b[i]] and ans
    -enter every b[i]  if it's pos[b[i]]>lst then remove[lst,i]
    -else just update answers


 * */
void solve() {
    int n, m; cin>>n>>m;
    map<int, int> pos;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        pos[x]=i;
    }
    int lst=-1;
    ll ans=0;
    for(int i=0;i<m;i++){
        int x; cin>>x;
        if(pos[x]>lst){
            ans+=2*(pos[x]-i)+1;
            lst=pos[x];
        }else   ans++;
    }
    cout<<ans;

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