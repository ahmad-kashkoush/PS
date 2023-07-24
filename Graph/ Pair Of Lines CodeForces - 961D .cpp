//
// Created by ak on 7/20/23.
//

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define el '\n'
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
#define pi pair<ll, ll>

vector<pi> point;
bool onSameLine(int i, int j, int k){
    pi a=point[i], b=point[j], c=point[k];
    ll dy0=a.second-b.second;
    ll dx0=a.first-b.first;
    ll dy1=b.second-c.second;
    ll dx1=b.first-c.first;
    return dx1*dy0==dx0*dy1;
}
bool check(int u, int v){
    vector<int> NotOnFirstLine;
    for(int i=0;i<point.size();i++) {
        if(!onSameLine(u, v, i))NotOnFirstLine.emplace_back(i);
    }
        if (NotOnFirstLine.size() < 3) {
//        Means I've two lines , because 2 points can form a line not parallel to the first line
            return true;
        }
    // check if points not on first line can form one line , if not then print NO
        for(int i=2;i<NotOnFirstLine.size();i++){
            if(!onSameLine(NotOnFirstLine[0], NotOnFirstLine[1], NotOnFirstLine[i]))
                return false;
        }
        return true;


}
void solve(){
    int n; cin>>n;
    point=vector<pi>(n);
    for(int i=0;i<n;i++){
        cin>>point[i].first>>point[i].second;
    }
    if(n<=2)return void(cout<<"YES");
    if(check(0, 1) or check(1, 2) or check(0, 2))
        cout<<"YES";
    else
        cout<<"NO";



}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//        cout<<el;
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

