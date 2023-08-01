//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/group/nMgBPsURd2/contest/371622/problem/R
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
        string s; cin>>s;
        int k; cin>>k;
        vector<string> v;
        for(int i=0;i<(1<<(int)s.size());i++){
            string tmp;
            for(int j=0;j<(int)s.size();j++){
                if((i>>j)&1)
                    tmp+=s[j];
            }
            v.emplace_back(tmp);
            tmp.clear();
        }
        sort(all(v));
        cout<<v[k-1]<<el;
        v.clear();

    }
    return 0;

}










