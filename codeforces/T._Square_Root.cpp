//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;

void JustDie() {
    double n; cin>>n;
    cout<<fixed<<setprecision(9);
    double l=0, r=n, ans=-1;
    while(l<=r){
        double mid=l+(r-l)/2.0;
        if(mid*mid<n)
            l=mid+1e-9;
        else r=mid-1e-9;
        ans=mid;
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int test=1;
    //  cin>>test;
    while(test--) {
        JustDie();
    }
}









