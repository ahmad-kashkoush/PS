//
// Created by ak on 4/7/23.
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
void Factors(int total, vector<int> &factors){
        for(int i=1;i<sqrt(total)+1;i++){
            if(total%i==0){
                if(i>total/i)break;
                factors.emplace_back(i);
                if(i<total/i)factors.emplace_back(total/i);
            }
        }
        sort(factors.rbegin(), factors.rend());

}
bool check(int total, int j){

    for(int i=0;i<j;i++){
        if(total%j!=1)return false;
        total-=total/j;
        total--;
    }
    return (total%j==0);

}
void solve(int total){
    vector<int> factors;
    Factors(total-1, factors);
    cout<<total<<" coconuts, ";
    for(int i=0;i<factors.size();i++){
        if(check(total, factors[i]))
            return void (
                    cout<<factors[i]<<" people and "<<1<<" monkey\n"
                    );
    }
    cout<<"no solution\n";


}
int main() {
    judge();
    int total=1;
    while(cin>>total){
        if(total<0)break;
        solve(total);


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

