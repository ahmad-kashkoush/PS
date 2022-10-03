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
    vector<int> a(n);
    for(auto &a:a)cin>>a;

    sort(all(a));

    int l=0, r=n-1;
    int ans=INT_MAX;
    while(l<=r){
        if(abs(a[l])<a[r])
            r--;
        else if(abs(a[l])>a[r])
            l++;
        else
            l++, r--;
        ans=min(ans, abs(a[l]+a[r]));
    }
    cout<<ans;
}









