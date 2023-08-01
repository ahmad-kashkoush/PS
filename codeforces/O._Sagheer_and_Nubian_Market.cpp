//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
int n;ll s;
vector<ll> a;
ll get_cost(ll mid){
    vector<ll> b(n);
    for(int i=0;i<n;i++){
        b[i]=a[i]+(i+1)*mid;
    }
    sort(all(b));
    ll sum=0;
    for(int i=0;i<mid;i++)
        sum+=b[i];

    return sum;
}
void JustDie() {
    cin>>n>>s;
    a.resize(n);
    for(auto &a:a)cin>>a;
    ll l=0, r=n, num=0;ll cost=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(get_cost(mid)>s)
            r=mid-1;
        else{
            l=mid+1;
            num=mid;
            cost=get_cost(mid);
        }
    }
    cout<<num<<" "<<cost;
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









