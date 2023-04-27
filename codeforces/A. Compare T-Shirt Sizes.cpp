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
        string a, b; cin>>a>>b;
        if(a==b)cout<<"=";
        else if(a.find("M")!=-1&&b.find("S")!=-1)cout<<">";
        else if(a.find("S")!=-1&&b.find("M")!=-1)cout<<"<";
        else if(a.find("M")!=-1&&b.find("L")!=-1)cout<<"<";
        else if(a.find("L")!=-1&&b.find("M")!=-1)cout<<">";
        else if(a.find("S")!=-1&&b.find("L")!=-1)cout<<"<";
        else if(a.find("L")!=-1&&b.find("S")!=-1)cout<<">";
        else  if(a.size()>b.size()&&a.find("L")!=-1)cout<<">";
        else  if(a.size()<b.size()&&a.find("L")!=-1)cout<<"<";
        else  if(a.size()>b.size()&&a.find("S")!=-1)cout<<"<";
        else  if(a.size()<b.size()&&a.find("S")!=-1)cout<<">";


        cout<<el;
    }


}










