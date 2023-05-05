//
// Created by ak on 4/29/23.
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
const int N=1e6+1;
bool is_composite[N];
//void sieve(){// o(1e3)
//    is_composite[0]=is_composite[1]=true;
//    for(int i=2;i*i<N;i++){
//        if(!is_composite[i])
//            for(int j=i*i;j<N;j+=i)
//                is_composite[j]=true;
//    }
//}
//void solve(){
//        int n; cin>>n;
//        sieve();
//        for(int i=2;i<n;i++){
//            if(n-i>1 and is_composite[i] and is_composite[n-i])
//                return void(cout<<i<<" "<<n-i);
//        }
//}
void greedySolution(){
    int n; cin>>n;


    /*How to think of it:
        n>=12 and n is either odd or even
        if(n even) then i can choose two even numbers so n/2 will be enough
        if(n is odd) so I'll choose delibrately an odd yet composite number, the other number must be even
     */
    if(n&1)cout<<9<<" "<<n-9;
    else   cout<<6<<" "<<n-6;
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        greedySolution();
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
