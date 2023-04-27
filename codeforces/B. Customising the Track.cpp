//
// Created by ak on 4/16/23.
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
void solve(){
    int n; cin>>n;
    vector<ll> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
//    sort(all(v));
    ll greaterThanAverage=sum%n;
    cout<<greaterThanAverage*(n-greaterThanAverage);

//    ll cnt=0;
//    for(int i=n-1;i>=0;i--){
//        if(v[i]>=avr){
//            cnt+=v[i]-avr;
//            v[i]=avr;
//        }else{
//            ll diff=avr-v[i];
//            if(diff>cnt)diff=cnt;
//            v[i]+=diff;
//            cnt-=diff;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(cnt==0)break;
//        v[i]++;
//        cnt--;
//    }
//    ll ans=0;
//    sort(all(v));
//    cout(v);
////   for(int i=0;i<n-1;i++){
////       for(int j=i+1;j<n;j++){
////           ans+=v[j]-v[i];
////
////       }
////   }
//    for(int i=0;i<n;i++){
//        sum-=v[i];
//        ans+=sum-(n-i-1)*v[i];
//    }


//    cout<<ans;


    cout<<el;

}
int main() {
    judge();
    int t=1;
    cin>>t;
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
    sum
    a[i], a[i+1], a[i+2], a[i+3]
    sum-a[i]=a[i+1}+a[i+2]+a[i+3]
    ans=a[i+1]-a[i]+a[i+2]-a[i]+a[i+3]-a[i]
    =a[i+1]+..-3*a[i]
   ans+= sum-3*a[i]


   57, 5
   57%10--> 7

 */