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
    int n, q; cin>>n>>q;
    vector<int> a(n);
    vector<int> pre(n+1, 0);
    cin(a);
    for(int i=1;i<n-1;i++){
        int take=0;
        if(a[i-1]>=a[i] and a[i]>=a[i+1])
            take++;
        pre[i]=pre[i-1]+take;
    }


    while(q--){
        int l, r; cin>>l>>r;
        l--, r--;
        if(l==r){
            cout<<"1"<<el;
            continue;
        }
        int ans=r-l+1-(pre[r-1]-pre[l]);
//        ans=(ans+1)/2;
        cout<<ans<<el;

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
/* Mistakes....
    You've thought of it as LIS Problem and sticked to your fucken idea,
    which locked your brain from subarray observation


    Next Time:
   1. verify more testcases
   2. brainstorm different solutions

 */