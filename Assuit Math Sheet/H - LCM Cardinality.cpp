//
// Created by ak on 4/11/23.
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
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
ll GCD(int a, int b){
   while(a%b){
       int tmp=a;
       a=b;
       b=tmp%b;
   }
   return b;
}


int main() {
    judge();
    int t=1;

    while(true){
        int n; cin>>n;
        if(n==0)break;
        vector<int> v;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                v.emplace_back(i);
                if(n/i!=i)v.emplace_back(n/i);
            }
        }
        sort(all(v));
        int ans=0;
        for(int i=0;i<(int)v.size();i++){
            for(int j=i;j<v.size();j++){
                if((ll)v[i]/GCD(v[i], v[j])*v[j]==n)
                    ans++;
            }


        }
        cout<<n<<" "<<ans<<el;// adding one for lcm(n, n)
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
