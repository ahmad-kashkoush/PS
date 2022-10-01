//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
ll n, k=1, o, m;

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t;cin>>t;
    while(t--){
        double n; cin>>n;
        cout<<fixed<<setprecision(9);
        double l=0, r=n, ans=-1;
        while(l<=r){
            double mid=l+(r-l)/2;
            double n2=n-mid;
            double add=mid+n2;
            double mul=mid*n2;
            if(abs(add-n)<=1e-6)&&abs(add-mul)<=1e-6){
                ans=mid;
                l=mid+1;
            }else r=mid-1;
        }
    }

}









