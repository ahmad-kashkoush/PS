//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/E
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
    for(auto &v:v)cin>>v;
//    for(int i=0;i<(1<<n);i++){
//            for(int j=0;j<n;j++){
//                cout<<i<<"&("<<j<<"="<<(1<<j)<<") :"<<(i&(1<<j))<<"   ";
//            }
//            cout<<el;
//
//    }
    int ans=0;
    for(int i=0;i<(1<<n);i++){
        int even=0, odd=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                if( (v[j]&1)==0)
                    even++;
                else odd++;

            }

        }
        cout<<el;
        ans+=(even>odd);

    }
//    cout<<ans;

}










