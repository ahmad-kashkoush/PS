//
// Created by ak on 9/4/23.
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
vector<int> convert(int b, int d){
        vector<int> num;
        while(d>0){
            num.push_back(d%b);
            d/=b;
        }
//        reverse(all(num));
        return num;
}
pair<bool, int> checkType2(const vector<int> &v) {
    int n = (int) v.size() - 1;
    if (v[0] == 0 or v[0] == 5)return {true, 1};
    if (n > 2 and (v[0] + 10 * v[1] + 100 * v[2]) % 4 == 0)return {true, 3};
    if (n > 1 and (v[0] + 10 * v[1]) % 4 == 0)return {true, 2};
    if (v[0] % 2 == 0)return {true, 1};
    return {false, -1};
}
pair<bool, int> checkType3(const vector<int> &v){
    int sum=0;
    for(auto i:v)
        sum+=i;
    if(sum%9==0)return {true, 9};
    else   if(sum%3==0) return {true, 3};
    return {false, -1};
}
bool checkType11(const vector<int> &v){
    int odd=0, even=0;
    for(int i=0;i<v.size();i++){
        if(i&1)odd+=v[i];
        else    even+=v[i];
    }
    return odd==even;
}
void solve(){
    int b, d; cin>>b>>d;
    vector<int> n=convert(b, d);
    pair<bool,int> type2=checkType2(n);
    pair<bool, int> type3=checkType3(n);

}
int main() {
    judge();
    int t=1;
//    cin>>t;
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

