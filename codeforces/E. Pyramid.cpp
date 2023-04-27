//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void print_pyramid(int n, int level=1){
    if(n==0)
        return;
    int stars=2*level-1;
    int space=n-1;

    cout<<string(space, ' ')<<string(stars, '*')<<el;
    print_pyramid(n-1,level+1);



}
void solve(){
    int n; cin>>n;
    print_pyramid(n);
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
    return 0;


}










