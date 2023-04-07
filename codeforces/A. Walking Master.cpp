#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;

int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        int a, b, ta, tb;
        cin>>a>>b>>ta>>tb;
        int ans=tb-b;
        if(ans<0)
            cout<<"-1\n";
        else{
            a+=ans;
            if(a<ta)
                cout<<"-1\n";
            else
                cout<<ans+a-ta<<el;
        }
    }
    return 0;
}

void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
