/*لو أنكم تتوكلون على الله حق توكله
 لرزقكم كما يرزق الطير
 تغدو خماصاً وتروح بطاناً

Author: AHMED KASHKOUSH
 */
#include<bits/stdc++.h>
// initial macros**
#define file     ;freopen("output.txt","w",stdout)
#define saian ios_base::sync_with_stdio(0), cin.tie(0),cout.tie(0);
#define fr(i, n) for(int i=0; i<n; i++)
//data type macros**
#define ll long long
#define ull unsigned long long
#define el '\n'
#define u   unsigned int
// sequence macros**
#define all(s)  s.begin(), s.end()
#define sz(x)   x.size()
#define mem(ar, val) memset(ar, val, sizeof(ar));
//pair macros**
#define fi first
#define se second
//number theory macros**
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  a  / __gcd(a, b )*b
#define Num_of_Digits(n) ((int)log10(n) + 1)
// constant macros**
#define imax  2147483647
#define imin  -2147483648
//permutation and combination formulas
#define nCr(n, r) factorial(n) / (factorial(r) * factorial(n - r))
#define npr(n, r) factorial(n) / factorial(n - r)
// modular arithmetic formulas
#define mod_mul(a, b, m) ((a%m)*(b%m))%m
#define mod_add(a, b, m) ((a%m)+(b%m))%m
#define mod_sub(a, b, m) ((a%m)-(b%m))%m
// STL Macros**
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<<' '
#define vi     vector<int>
#define pi     pair<int, int>
#define fi first
#define se second
using namespace std;
//---------------------------------------------------
int factorial(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

void solve(){

}




int main(){
    //file;
    saian;
    int t=1;
//    cin>>t;
    while(t--){
      solve();
      cout<<el;
    }
}







