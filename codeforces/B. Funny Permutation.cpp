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
        if(n==1||n==3)cout<<-1;
        else{

                if(n&1){
                        if(n==5){
                            cout<<"5 4 1 2 3\n";
                            continue;
                        }
                        int i;
                        for( i=n;i>n/2+1;i--)
                            cout<<i<<" ";
                        cout<<i-1<<" "<<i<<" ";
                        i-=2;
                        while(i>0)
                            cout<<i--<<" ";
                }else{
                    for(int i=n;i>=1;i--)
                        cout<<i<<" ";
                }
        }
        cout<<el;
    }
}










