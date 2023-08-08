#include <ext/pb_ds/assoc_container.hpp>
#include <bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef long long ll;
#define int long long
#define all(x) x.begin(),x.end()
#define get_bit(n,i) ((n>>i)& 1LL)
const ll OOLL = 6 * 1e18 , OO = 2 * 1e9;
const int N = 1e3 + 5,M = 15001, LG = 19, mod = 1e9 + 7;
const long double PI = acos(-1);
const long double EPS = 1e-7;
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
    return a * b / gcd(a ,b);
}

ll Bin_exp(ll a , ll b){
    ll ret = 1;
    while(b){
        if(b % 2) ret = (ret * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return ret;
}
int dx[8] = {0,  0, 1, -1,  1, -1, 1, -1};
int dy[8] = {1, -1, 0,  0, -1,  1, 1, -1};

int chessX[8] = {-1,1,-1,1 , -2,-2,2,2};
int chessY[8] = {-2 , -2 ,2,2 ,1,-1,1,-1};
int n , k , arr[N] , dp[N][N][2];

int solve(int i , int sum , int part){
    if(i == n){
        return 0;
    }

    int &ret = dp[i][sum][part];
    if(~ret) return ret;
    ret = -OOLL;
    ret = max(ret , solve(i + 1 , sum , part));
    if((arr[i] & 1) == part && sum < k){
        ret = max(ret , solve(i + 1 , sum + 1 , part) + arr[i]);
    }
    if((arr[i] & 1) != part){
        ret = max(ret , solve(i + 1, 1 , part ^ 1) + arr[i]);
    }
    return ret;
}

void sol(){
    cin >> n  >> k;
    for(int i = 0;i < n;++i){
        cin  >> arr[i];
    }
    for(int i = 0;i < n;++i){
        for(int j =0 ;j < n;++j){
            dp[i][j][0] = dp[i][j][1] = -1;
        }
    }
    cout << solve(0 , 0 , 0) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
    //  freopen("cases.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;++i){
        sol();
    }
    return 0;
}