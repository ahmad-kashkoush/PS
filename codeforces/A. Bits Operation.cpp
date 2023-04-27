//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/A
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int n, q; cin>>q>>n;
    int op;
    while(q--){
        int option, x;
        cin>>option;
        if(option==4)
            op=~n;
        else{
            cin>>x;
        if(option==1)
            op=(n|x);
        else if(option==2)
            op=(n&x);
        else if(option==3)
             op=(n^x);
        }

         cout<<op<<el;
         n=op;
    }


}









