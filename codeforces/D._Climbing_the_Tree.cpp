//
// Created by ak on 5/8/23.
//
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
void solve(){
    int q;cin>>q;
    ll st=1, ed=1e18;
    while(q--){
        int c, a, b, n;
        cin>>c>>a>>b;
        if(c==1){
            cin>>n;
            ll l=(ll)(n-2)*(a-b)+a+1;
            ll r=(ll)(n-1)*(a-b)+a;
            if(n==1)l=1, r=a;
            if(l>ed or r<st)cout<<"0";
            else st=max(l, st), ed=min(ed, r),cout<<"1";
        }else {
            ll mx = max((ed-b-1) / (a - b)+1, 1LL);
            ll mn = max(1LL,(st-b-1)/(a-b)+1);
            if (mx == mn)cout << mx ;
            else cout << "-1";
        }
        cout<<" ";
    }
}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
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
/*
    Solution....
    height of tree can be between [l1, l2]
    l1:max Height--> consume all a --> (n-1)(a-b)+a
    l0:min Height--> maxHeight of (n-1)+1--> ((n-2)(a-b)+a)+1
    if operation equal 1
        then you check heights and update if and only if q[l1, l2]  interset with [l1, l2]
        if so... then update the range to be smaller and print(1)
        otherwise don't update and print(0)
    if operation equal 0
        then you need a value that is certain
        certain here means that same value can work for any height in range[l1, l2]
                (n-2)(a-b)+a<l<(n-1)(a-b)+a
                            (n-2)<(l-a)/(a-b)<n-1   then add 1 to get height between (n-1,n
                            n-1<(l-a)/(a-b)+1<n     for ceil
                            n-1<(l-a+a-b-1)/(a-b)+1<n equal to...
                            n-1<(l-b-1)/(a-b)+1<n
            the above formula will give you n
            then get :
                - n when height equal l1
                - n when height equal l2
            if same n print n
            else i can't predict--> print -1
 */
