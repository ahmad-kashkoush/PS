//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/group/c3FDl9EUi9/contest/267312
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
// change value of (first bit equal to 0) to 1.
// 101-->111, 10001-->10011
void fun1(int &n){
    n=((n+1)|n);// 101| 110=111
    cout<<n<<el;

}
void fun2(int &n){
    n=(n&(n-1));
    cout<<n<<el;
}

void fun3(int &n){
    if(n==0)
        n=-1;
    else
        n=(n|(n-1));
    cout<<n<<el;
}
void fun4(int &n){
    n=((n+1)&n);
    cout<<n<<el;
}
void fun5(int n){
      int l=0;
    while(n)
    {
        n&=(n-1);
        l++;
    }
    if(l==1)cout<<"is power of two\n";
    else cout<<"not power of two\n";
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int n, q; cin>>n>>q;
    while(q--){
        int x; cin>>x;
        if(x==1)     fun1(n);
        else if(x==2)fun2(n);
        else if(x==3)fun3(n);
        else if(x==4)fun4(n);
        else         fun5(n);
    }

}









