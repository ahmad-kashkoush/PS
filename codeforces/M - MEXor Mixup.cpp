//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
// ans=(0^...^(a-1))^value;-->what's our value?
// if(0^..^(a-1)==b so we don't need value
// else if(0^...^(a-1)) ^b!=a, then to get b we write the following formula:
// (0^...^(a-1))^(0^...^(a-1)^b) so our value is just 1 element
// else if(0^...^(a-1)) ^b==a, then to get b we write the following formula:
// (0^...^(a-1))^(0^...^(a-1))^b, so our value is 2 elements
// answer will be= number of(0^...^(a-1))+ value
void solve(){
        int a, b; cin>>a>>b;
        int sz=a;
        a--;
        int x=0;
        if(a%4==0)x=a;
        else if(a%4==1)x=1;
        else if(a%4==2)x=a+1;
        if(x!=b)
            ((x^b)!=(a+1))?sz++ :sz+=2;
        cout<<sz<<el;


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










