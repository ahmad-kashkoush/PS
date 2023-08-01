//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
void solve(){
    int n; cin>>n;
    vector<string> a(n);
    for(auto &i:a)
        cin>>i;

    int x1, y1, x2, y2;
    bool first_node=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='*'){
                if(first_node)
                    x1=i,y1=j,first_node=false;
                else x2=i, y2=j;
            }
        }
    }
    int shift=0;
    if(x1==x2){// shift the row
        shift=(x1==n-1?x1-1:x1+1);
        a[shift][y1]='*';
        a[shift][y2]='*';
    }else if(y1==y2){
        shift=(y1==n-1?y1-1:y1+1);
        a[x1][shift]='*';
        a[x2][shift]='*';
    }else{
        a[x1][y2]='*';
        a[x2][y1]='*';
    }
    for(auto i:a)
        cout<<i<<el;
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










