//
// Created by ahmedkashkoush on 9/12/23.
//
//
// Created by ak on 9/6/23.
//
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minDeletions(string s) {
        map<char, int> chFr;
        for(auto i:s)chFr[i]++;
        map<int, string> mp;
        map<int, int> cnt;
        for(auto [ch, fr]:chFr) {
            mp[fr] += ch;
            cnt[fr]++;
        }

        string ss;
        for(auto [fr, s]: mp){
            for(auto i:s){
                ss+=i;
            }
        }
        reverse(ss.begin(), ss.end());
        int ans=0;
        for(auto ch:ss){
            while(cnt[chFr[ch]]>1){
                int prev=chFr[ch];
                chFr[ch]--;
                cnt[prev]--;
                if(cnt[chFr[ch]]!=0)cnt[chFr[ch]]++;
                ans++;
            }
        }

        return ans;
    }

    void print(){
        string s; cin>>s;
        cout<<minDeletions(s);
    }

};
void judge();
int main(){
    judge();
    Solution sol;
    sol.print();


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
