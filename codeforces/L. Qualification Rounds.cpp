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
    int n, k; cin>>n>>k;
    vector<string> v;
    map<string, int> m;
    for(int i=0;i<n;i++){
        string tmp;
        for(int j=0;j<k;j++){
            char ch;cin>>ch;
            tmp+=ch;
        }
        if(!m[tmp])
            v.emplace_back(tmp);
        m[tmp]++;
        tmp.clear();


    }
    if(v.size()==1){
        if(v[0].find("1")!=-1)
            cout<<"NO";
        else    cout<<"YES";

    }else{
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                    bool can=true;
                    for(int l=0;l<k;l++){
                        if(v[i][l]==v[j][l] && v[i][l]=='1'){
                            can=false;break;
                        }
                    }
                    if(can){
                    cout<<"YES";
                    return 0;
                }
            }
        }
        cout<<"NO";
    }


}
