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
    priority_queue<ll> pq;
    int ans=0;
    ll sum=0;
    while(n--){
        int x; cin>>x;
        pq.emplace(-x);// greater to lower, instead ... lower to greater
        sum+=x;
        ans++;
        if(sum<0){
            sum+=pq.top();
            pq.pop();
            ans--;
        }
    }
    cout<<ans;
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
/*
    Trick#6
    if I want (sum to be non-negative)
    and I want the numer of elements to be maximum possible
    store the values in datastructure where values are minmum in the prefix
    sum+=value[i]
    if(sum<0){
        remove the minimum values
        }
   maximum number of elements that create non-negative sum
 */