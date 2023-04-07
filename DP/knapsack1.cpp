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

void judge();

void tc();
#define weight first
#define value  second

const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve() {
    int n, k; cin>>n>>k;
    vector<pair<int,int>> arr(n+10, make_pair(0, 0));
    vector<vector<ll>> dp(n+10, vector<ll> (k+10, -1));

    for(int i=1;i<=n;i++)
        cin>>arr[i].first>>arr[i].second;

//    sort(all(arr));// will be sorted based on the weight
    dp[0][0]=0;// initially we don't take anything --> dp[index][weight]=profit
    for(int i=0;i<=n;i++){
        for(int w=0;w<=k;w++){
            if(i==0||w==0)
                dp[i][w]=0;
           else if(arr[i].weight<= w)// i can fill this weight
            {
                dp[i][w]=max(dp[i-1][w], arr[i].value+dp[i-1][w-arr[i].weight]);
            }
            else
                dp[i][w]=dp[i-1][w];
        }
    }

    cout<<dp[n][k];


}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}

void tc() {
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