//
// Created by ak on 1/29/2023.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;

void judge();

void tc();
void solve() {
    int n; cin>>n;
    string s;cin>>s;
    vector<vector<int>> freq(n+1, vector<int>(26, 0));
    for(int i=0;i<n;i++){
        freq[i][s[i]-'a']++;
        if(i>0) {
            for (char k = 'a'; k <= 'z'; k++) {
                freq[i][k - 'a'] += freq[i - 1][k - 'a'];// prefix sum
            }
        }
    }
    int m; cin>>m;
    while(m--){
        string t; cin>>t;
        vector<int> cnt(26, 0);
        for(auto i:t)
           cnt[(int)i-(int)'a']++;
        /*Binary Search*/
        int l=1, r=n;
        while(l<=r){
            int mid= l+((r-l)>>1);
            bool goLeft=true;

            for(char k='a';k<='z';k++)
                if(freq[mid-1][(int)k-(int)'a']<cnt[(int)(k-'a')]){
                    goLeft=false;
                    break;
                }

            if(goLeft){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<l<<el;

    }


}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}

void tc() {
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        //cout<<el;
    }
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