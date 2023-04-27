//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/B
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int n, q;cin>>q>>n;
    while(q--){
        int o, x;
        cin>>o>>x;
        if(o==1){
            cout<<(1&(n>>x));
        }else{
            if(o==2)
                n=n|(1<<x);
            else if(o==3)
                n=n&~(1<<x);
            else if(o==4)
                n=n^(1<<x);
            cout<<n;
        }
        cout<<el;
    }

}










