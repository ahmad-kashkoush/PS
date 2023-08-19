//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int mod = 1e9 + 7, OO = INT_MAX;
const int MAX=500+1;
 int mem[MAX];
 int n, k;
 int *arr;
 int maxSum(int idx){
     if(idx==n)
         return 0;
     int &ret=mem[idx];
     if(ret!=-1)
         return ret;
     ret=0;
     int mxValue=0;

     for(int i=idx, cnt=0;i<n;i++, cnt++){
         mxValue=max(arr[i], mxValue);
         if(cnt>=k)
             break;
         int length=i-idx+1;
         ret=max(ret, mxValue*length+maxSum(i+1));
     }
     return ret;
 }
void solve() {
    cin>>n>>k;
    arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    memset(mem, -1, sizeof(mem));
    cout<<maxSum(0);

}

int main() {
    judge();
    tc();
//    solve();
    return 0;
}

void tc() {
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        cout<<"#tc"<< tc<<": ";
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