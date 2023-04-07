//
// Created by ahmed-kashkoush on 3/27/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int N=1e6+10;
bool Primes[N];
void Sieve(){
      vector<int> v;
      reset(Primes, true);
      Primes[0]=false;
      Primes[1]=false;
      for(int i=2;i*i<N;i++) {
          if (Primes[i]) {
              for (int j = i * i; j < N; j += i)
                  Primes[j] = false;
          }
      }



}
void solve(){
    int n; cin>>n;
    Sieve();
    while(n--){
        ll x; cin>>x;
        ll j=sqrt(x);
        cout<<(Primes[j] and j*j==x?"YES\n":"NO\n");
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
