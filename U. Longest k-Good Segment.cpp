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

    int n, k; cin>>n>>k;
    map<int, int> m;
    vector<int> a(n);
    for(auto &a:a)cin>>a;

    int l=0, r=0, ans=0;
    int id_l, id_r;
    while(l<n&&r<n){
        m[a[r]]++;
        while(m.size()>k&&l<n){
            m[a[l]]--;
            if(m[a[l]]==0)
                m.erase(a[l]);
            l++;
        }
        if(ans<r-l+1){
            ans=r-l;
            id_l=l+1;
            id_r=r+1;
        }
        r++;
    }
    cout<<id_l<<" "<<id_r;
}









