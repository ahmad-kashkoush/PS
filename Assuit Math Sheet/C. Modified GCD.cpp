//
// Created by ak on 4/7/23.
//https://codeforces.com/problemset/problem/75/C
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
vector<int> factor(int total){
    vector<int> factors;
    for(int i=1;i<=total/i;i++){
        if(total%i==0){
            if(i>total/i)break;
            factors.emplace_back(i);
            if(i<total/i)factors.emplace_back(total/i);
        }
    }
    sort(all(factors));
    return factors;

}
void solve(){
    int a, b; cin>>a>>b;
    int G=__gcd(a, b);
    vector<int> factors=factor(G);

    int n;cin>>n;
    while(n--){
        int l, h;
        cin>>l>>h;
        bool ok=false;
//        for(int k=(int)factors.size()-1;k>=0;k--){
//            int i=factors[k];
//            if(l<=i and i<=h){
//                cout<<i,ok=true;
//                break;
//            }
//
//        }
        int ans=-1;
        int left=0, right=(int)factors.size();
        while(left<=right){
            int mid=left+(right-left)/2;
            if(factors[mid]>h)right=mid-1;
            else if(factors[mid]<l)left=mid+1;
            else ans=factors[mid], left=mid+1;
        }


        cout<<ans;
        cout<<el;
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

