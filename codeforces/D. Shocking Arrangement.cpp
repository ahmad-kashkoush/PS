//
// Created by ahmed-kashkoush on 3/27/23.
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
void solve() {
    int n;
    cin >> n;
    deque<int> v(n), answer(n), neg, pos;
    ll totalSum=0;
    for (auto &i: v) {
        cin >> i;
        if (i >= 0)pos.emplace_back(i);
        else neg.emplace_back(i);
        totalSum+=i;
    }
    ll j=*max_element(all(v))-*min_element(all(v));
    if(totalSum>=j)return void(cout<<"NO");
    totalSum=0;
    sort(all(neg));
    sort(all(pos));
    for(int i=0;i<answer.size();i++){
        if(!pos.empty() and totalSum+pos[0]<j) {
            answer[i] = pos[0];
            totalSum+=pos[0];
            pos.pop_front();
        }else{
            if(!pos.empty() and neg.empty())
                return void(cout<<"NO");
            if(!neg.empty()){
                answer[i]=neg[0];
                totalSum+=neg[0];
                neg.pop_front();
            }
        }
    }
    cout<<"YES\n";
    cout(answer);


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

