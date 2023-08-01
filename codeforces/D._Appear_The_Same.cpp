#include<bits/stdc++.h>
#define el '\n'
using namespace std;
void judge();

void solve() {
    string s; cin>>s;
    map<char, int> frq;
    for(auto c:s)
        frq[c]++;
    map<int, int> st;
    int ones=0;
    for(auto i:frq) {
        st[i.second]++;
    }
    if(st.size()==1){
        cout<<"Yes";
    }else if(st.size()==2){
        if(st[1]==1){cout<<"Yes";return;}
        st.erase(1);
        auto it=st.begin();
        int f1=it->first;

        it++;
        int f2=it->first;

        if(st[f2]>1){cout<<"No1";return;}
        cout<<"Yes";

    }else cout<<"No";
}

int main() {
    judge();
    solve();
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
