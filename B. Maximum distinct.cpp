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

    int n, k;
    cin>>n>>k;
    string s; cin>>s;
    map<char, int> m;
    for(int i=0;i<k;i++)
        m[s[i]]++;
    int ans=m.size();
    for(int i=k;i<n;i++){
        char toAdd=s[i], toRem=s[i-k];
        m[toAdd]++;
        m[toRem]--;
        if(m[toRem]==0)
            m.erase(toRem);
        ans=max((int)m.size(), ans);
    }
    cout<<ans;

}









