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

set<int> ans;
bool Prime_Factors(int n){
    set<int> p;
    for(int i=2;i*i<=n;i++){
       while(n%i==0){
           p.emplace(i);
           n/=i;
       }
    }
    if(n!=1)p.emplace(n);
    int j=0;
    map<int, int> vis;
    for(auto p:p){
        j+=(ans.count(p));


       if(j>=2)return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    for(int i=2;i<=n;i++){
        if(Prime_Factors(i))ans.emplace(i);
    }
    cout<<ans.size()<<el;
    cout(ans);
    cout<<el;
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
  solve it by my own but get wa because of not verfying testcases
  [next Time] type incremental testcases and don't care about speed
  [Solution]
        he wants you to get only one number gauranteed
        let this number be x;
        number must be the only one that is divisible or not divisible by this nubmer
        [examples]
         seq--> 2 3 and n==4
            I've two numbers divisible by 4 and not divisible by 3 [2, 4]
            sequence is not valid
        seq--> 2 3 4 and n==4
        I've only one number divisible by 4 and not divisible by any other number which is 4

        n==6
        2 3 4
        only one number divisible by 2, 3 and not divisible by 6 [seq is valid]
        2 3
        three numbers divisible by 2 and not divisible by 3  [not valid]

        so let's get it all along
        n==8
        seq --> 2 4 8 is true but  2 4 not true because [8, 4] will be divisible by 2 4 and
        so if(number can satisfy old condistion take it to build new condition]
          number like prime number will satisfy old conditions because he will behave like 1)

        [summary]
        prime number satisfy
        number has 1 prime factor satisfy
        number has two prime factors like 6 doesn't satsfy


  */
