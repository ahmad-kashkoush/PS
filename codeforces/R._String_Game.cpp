#include<bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;
string a, b;
vector<int> v;

bool con(int mid){
    int aa=a.size(),bb=b.size();
    vector<int> vis(aa, 0);

    for(int i=0;i<mid;i++)
        vis[v[i]-1]++;

    int j=0;
    for(int i=0;i<aa&&j<bb;i++){
        if(!vis[i]&&a[i]==b[j])
                j++;
    }
    return j==bb;

}
int main(){
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    // بسم الله
    cin>>a>>b;
    v.resize(a.size());
    for(auto &v:v)cin>>v;
    int l=0, r=(int)a.size();
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(con(mid)){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<ans;

}

