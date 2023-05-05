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
map<int, int> freq;
void PrimeFactors(int n){
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            freq[i]++;
            n/=i;
        }
    }
    if(n!=1)freq[n]++;
}
// count primes have power x
int powers(int n){
    int x=0;
    for(auto [a, f]:freq){
        x+=(f+1>=n);
    }
    return x;
}
void solve(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        PrimeFactors(i);
    }
//    for(auto [a, cnt]:freq)cout<<a<<" "<<cnt<<el;
        int ans=powers(75);
            ans+=powers(25)*powers(3)-powers(25);// removing intersection
            ans+=powers(15)*powers(5)-powers(15);
            int threeDivisors=powers(5)*(powers(5)-1)*(powers(3)-2);
            cout<<(ans+threeDivisors/2);
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
