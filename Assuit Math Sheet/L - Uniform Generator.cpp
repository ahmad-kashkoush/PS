//
// Created by ak on 4/13/23.
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

int main() {
    judge();
    int n, m;
    while(scanf("%d %d", &n, &m) == 2){
        int prv=0;
        set<int> st;
        bool acc=true;
        for(int i=0;i<m;i++){
            int ans=(prv+n)%m;
            if(st.count(ans)){
                acc=false;
                break;
            }
            st.emplace(ans);
            prv=ans;
        }
        if(acc)
             printf("%10d%10d    Good Choice\n", n, m);
        else
            printf("%10d%10d    Bad Choice\n", n, m);
        puts("");
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

