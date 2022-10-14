#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int n; cin>>n;
    vector<vector<int> > v;
    vector<int> tmp, ans;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x; cin>>x;
            if(x)tmp.emplace_back(j+1);
        }
        v.emplace_back(tmp);
        tmp.clear();
    }
    tmp.clear();


    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if( (i>>j)&1 )
                   tmp.emplace_back(j+1);

        }
        bool ok=1;
        for(int i=0;i<tmp.size();i++){

            for(int j=0;j<tmp.size();j++){
                if(i!=j){
                    auto x=lower_bound(v[tmp[i]-1].begin(), v[tmp[i]-1].end(),tmp[j]);

                    if(x==v[tmp[i]-1].end()|| (*x)!=tmp[j]){
                        ok=0;break;
                    }
                }
            }
            if(!ok)break;

        }
        if(ok){
            if(ans.size()<tmp.size()){
                ans.clear();
                ans=tmp;
            }
        }
        tmp.clear();
    }


    cout<<ans.size()<<el;
    for(auto it:ans)cout<<it<<" ";




















}
