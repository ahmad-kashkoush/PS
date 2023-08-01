//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;


int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int n; cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int ans=0;
    sort(all(v));
    for(int p=0;p<n-2;p++){
        for(int q=p+1;q<n-1;q++){
            int   tmp=lower_bound(v.begin()+q, v.end(), v[q]+v[p])-(v.begin()+q+1);
            ans+=tmp;
        }
    }
    cout<<ans;
}









