//
// Created by ak on 4/12/23.
//https://codeforces.com/problemset/problem/1557/A
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
        vector<int> arr(n);
        long double sum1=0, sum2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum1+=arr[i];
        }
        sort(all(arr), greater<>());
        long double ans=LONG_LONG_MIN;
        sum1/=n;
        for(int i=0;i<n;i++){
               sum1=(sum1*(n-i)-arr[i]);
               if(n-i-1==0)continue;
               sum1/=(n-i-1);
                sum2=(double)(arr[i]+sum2*i)/(i+1);
                ans=(sum1+sum2>ans?sum1+sum2:ans);
        }
        cout<<setprecision(6)<<fixed;
        cout<<ans;
}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
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

