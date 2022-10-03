//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;

void JustDie() {
    int n, s; cin>>n>>s;
    vector<int> v(n);
    ll first_condition=0;
    for(int i=0;i<n;i++)
        cin>>v[i], first_condition+=v[i];
    if(first_condition<s)
        cout<<-1;
    else{
        int l=0, r=0;
        ll sum=0;
        int ans=INT_MAX;
        while(l<n&&r<n){
            while(sum<s&&r<n)
                sum+=v[r++];

            if(sum>=s)
                ans=min(ans, r-l);
            sum-=v[l++];
        }
        cout<<ans;
    }



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









