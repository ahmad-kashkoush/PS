//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
bool isComposite(ll sum){

    for(int i=2;i*i<=sum;i++){
        if(sum%i==0)
            return true;
    }
    return false;
}
void solve(){
    int n, z; cin>>n;
    z=n;
    map<int, int> id;
    vector<int> v(n), odd;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        id[v[i]]=i+1;
        if(v[i]&1)odd.push_back(v[i]);
        sum+=v[i];
    }


            int i=0;
            while(!isComposite(sum)&&i<odd.size()){
                sum-=odd[i];
                id[odd[i]]=-1;
                z--;
                i++;
            }

            if(isComposite(sum)){
                cout<<z<<el;
                for(auto i:v){
                    if(id[i]>0)
                        cout<<id[i]<<" ";
                }
                cout<<el;
                return;
            }

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










