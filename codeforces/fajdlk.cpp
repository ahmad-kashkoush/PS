//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        map<int, int> m;
        map<int, int> id;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(!m[x])
                v.push_back(x);
            m[x]++;
            id[x]=i+1;
        }

        int ans=-1;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(__gcd(v[i],v[j])==1)
                    ans=max(ans, id[v[i]]+id[v[j]]);
            }
        }
        cout<<ans<<el;


    }
}

