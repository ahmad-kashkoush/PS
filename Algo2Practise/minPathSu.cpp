//
// Created by ahmed-kashkoush on 2/2/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
#include<bits/stdc++.h>
#define el '\n'
using namespace std;

void judge();
int n=3, m=4;
vector<vector<int>> v={{3,2,1,3},{1, 9, 2, 3},{9, 1, 5, 4}};
int minPath(int i, int j){
    if(i==n||j==m)
        return INT_MAX;
    if(i==n-1&&j==m-1)
        return v[i][j];
    return v[i][j]+min(minPath(i+1, j), minPath(i, j+1));
}
void solve() {
    cout<<"Recursive: "<<minPath(0, 0)<<el;
    int dp[4][5];
    for(int i=0;i<4;i++)
        memset(dp[i], 0, sizeof(dp[i]));

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++) {//o(n*m)
            /*Conditions
             * first cell
             * first row
             * first col
             * rest*/
            if(i==0&&j==0)
                dp[i][j]=v[i][j];
            else if(i==0&&j!=0){
                    dp[i][j]=v[i][j]+dp[i][j-1];
            }else if(i!=0&&j==0){
                    dp[i][j]=v[i][j]+dp[i-1][j];
            }else{
                dp[i][j]=v[i][j]+min(dp[i][j-1], dp[i-1][j]);
            }

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
         cout<<   dp[i][j]<<" " ;
        cout<<el;
    }
    cout<<"Iterative :"<<dp[2][3];

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
