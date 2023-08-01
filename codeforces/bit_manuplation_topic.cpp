//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void printNumber(int n, int len){
    if(!len)
        return;
    printNumber(n>>1, len-1);// just removing the first bit;
    cout<<(n&1);
}
int countBits1(int n){
    int res=0;
    while(n){
       res+=(n&1);
       n>>=1;
    }
    return res;
}
void printSubsets(int len){
    for(int i=0;i<(1<<len);i++){
        printNumber(i, len);
        cout<<el;
    }


}
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    printSubsets(3);
}










