//
// Created by ak on 5/25/23.
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
int sumOfDigits(int x){
    int ret=0;
    while(x>0){
        ret+=((x%10));
        x/=10;
    }
    return ret;
}
void solve(){
    int n, q; cin>>n>>q;
    int arr[n+1];
    set<int> active;
    for(int i=0;i<n;i++){
        cin>>arr[i];
       if(arr[i]>9) active.emplace(i);
    }

    while(q--){
        int com;cin>>com;
        if(com==2){
            int x; cin>>x;x--;
            cout<<arr[x]<<el;
        }else{
            int l, r; cin>>l>>r;l--, r--;
            while(!active.empty()){
                auto it=active.lower_bound(l);
                if(it==active.end() or *it>r)break;
                int tmp=*it;
                active.erase(it);
                arr[tmp]= sumOfDigits(arr[tmp]);
                if(arr[tmp]>9)active.emplace(tmp);
                l=tmp+1;
            }
        }
    }
}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
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
/*  Solution
    - you have queries
        - 1 l r--> update the range [l, r] if needed
        -2 x--> print A[x]
    - Observations
        1. if A[L]<=9 , then it's sumOfDigits won't differ so consider L not active
        2. in the array you will only updated active indecies

    - psudo code for solution
            . enter array and number of queries
            . consider only active indecies and insert them on a set
            . if type equal 1:
                . loop on range from [l, r] in the set and update their values
                . remove inactive indecies
            . otherwise
                . print a[x]

 */