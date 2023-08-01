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
    int n; cin>>n;
    int a[n], b[n];
    cin(a);cin(b);
    vector<pair<int, int>> moves;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j] or (a[i]==a[j] and b[i]>b[j])){
                moves.emplace_back(i+1, j+1);
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    if(is_sorted(a, a+n) and is_sorted(b, b+n)){
        cout<<moves.size()<<el;
        for(auto i:moves)
            cout<<i.first<<" "<<i.second<<el;
    }else
        cout<<"-1\n";
}
int main() {
    judge();
    int t=1;
    cin>>t;
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
