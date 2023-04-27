
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;

void JustDie() {
    int n, d; cin>>n>>d;
    vector<pair<int, int> > p(n);
    for(auto &p:p)
        cin>>p.first>>p.second;// first money, second factor
    sort(all(p));
    ll ans=0, cnt=0, k=0;
    for(int i=0;i<n;i++){
        while(p[i].first-p[k].first>=d)
            cnt-=p[k++].second;
        cnt+=p[i].second;
        ans=max(ans, cnt);
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);

    int test=1;
    //  cin>>test;
    while(test--) {
        JustDie();
    }
}








