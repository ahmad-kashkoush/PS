//
// Created by ahmed-kashkoush on 3/25/23.
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
        int a, x, y;
        cin>>a>>x>>y;
        if(abs(x)>=a or y%a==0)return void (cout<<"-1"<<el);
        int levels=y/a+1;
        if(levels<3) {
           if(abs(x)>=abs((a+1)/2))
               cout<<"-1"<<el;
           else
               cout<<levels<<el;
        }else{
            if((levels & 1)){
                int j=levels/2;
                if(x==0)return void(cout<< -1);
                int nsq=3*j+(x>0);
                cout<<nsq;
            }else{
                if(abs(x)>=(a+1)/2)return void(cout<<"-1");
                int j=(levels-1)/2;
                cout<<3*j+2;
            }
        }





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

