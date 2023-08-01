//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/D
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
//bool cmp(vector<int> a, vector<int> b){
//    if(a.size()==b.size()){
//        for(int i=0;i<b.size();i++){
//            if(a[i]!=b[i])
//                return a[i]<b[i];
//        }
//    }
//
//    return a.size()<b.size();
//}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int n; cin>>n;
    vector<int> v(n);
    for(auto &v:v)cin>>v;

    vector<vector<int> > ans;
    vector<int> tmp;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j))
                tmp.emplace_back(v[j]);
        }
        ans.emplace_back(tmp);
        tmp.clear();
    }
    sort(all(ans));

    for(auto i:ans){
        for(auto j:i)
            cout<<j<<" ";
        cout<<el;
    }
}










