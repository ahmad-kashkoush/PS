//
// Created by ahmed-kashkoush on 1/21/23.
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
class Solution {
    string a, b;
    vector<vector<int>> dp;
public:
    int longestCommonSubsequence(string text1, string text2) {
        a=text1, b=text2;
        dp=vector<vector<int>>((int)a.size()+3, vector<int>((int)b.size()+3, -1));
        for(int i=0;i<=a.size();i++){
            for(int j=0;j<=b.size();j++){
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(a[i-1]==b[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[(int)a.size()][(int)b.size()];
    }

};



int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    Solution s;
    string a, b;cin>>a>>b;
    cout<<s.longestCommonSubsequence(a,b);
    cout<<el;
    cin>>a>>b;
    cout<<s.longestCommonSubsequence(a, b);
    cout<<el;
    cin>>a>>b;
    cout<<s.longestCommonSubsequence(a, b);

    return 0;
}

