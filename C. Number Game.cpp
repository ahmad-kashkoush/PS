//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/contest/1749/problem/C
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
bool get(int k, vector<int> a){
    // I want 2 things:
    // 1. Alice get max element<=k-i+1;
    // 2. Bob update min value of the array
    while(k>0){
        int mx=-1;
        for(int i=0;i<a.size();i++){
           if(a[i]<=k){
            if(mx==-1||a[mx]<a[i])
                mx=i;
           }
        }

        if(mx==-1)return false;
        a[mx]=INT_MAX;

        int mn=min_element(all(a))-a.begin();

        a[mn]+=k;
        k--;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;

    sort(a.rbegin(),a.rend());
    int l=0, r=n, k=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(get(mid, a))
            k=mid, l=mid+1;
        else
            r=mid-1;
    }
    cout<<k<<el;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;


}










