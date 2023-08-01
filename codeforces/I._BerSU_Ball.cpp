#include<bits/stdc++.h>
#define ll long long
#define el "\n"
#define all(x) x.begin(), x.end()
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int n, m; cin>>n;
    vector<int> a(n);
    for(auto &a:a)cin>>a;
    cin>>m;
    vector<int> b(m);
    for(auto &b:b)cin>>b;
    sort(all(a));
    sort(all(b));
    int i=0, j=0, ans=0;
    while(i<n&&j<m){
        int aa=a[i], bb=b[j];
        if(aa+1<bb)
            i++;
        else if(bb+1<aa)
            j++;
        else
            ans++, i++, j++;
    }
    cout<<ans;
}

