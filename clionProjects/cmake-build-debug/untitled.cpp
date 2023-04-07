//
// Created by ak on 1/27/2023.
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

const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve() {
        int n; cin>>n;
        int arr[n][n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>arr[i][j];
            }
        }
        map<int, int> freq, vis, num;
        for(int col=0;col<n-1;col++){
            int ans=0;
            vector<int> tmp;
            for(int row=0;row<n;row++){
                freq[arr[row][col]]++;
                if(!vis[arr[row][col]]){
                    tmp.push_back(arr[row][col]);
                    vis[arr[row][col]]++;
                }
            }
                if(tmp.size()==1)
                    cout<<tmp[0]<<" ", vis[tmp[0]]++;
                else{
                    int a=tmp[0], b=tmp[1];
                    if(freq[a]<freq[b])
                        swap(a, b);
                    cout<<a<<" "<<b<<" ";
                    vis[a]++, vis[b]++;
                }


                freq.clear();
        }

}

int main() {
    judge();
    tc();
//    solve();
    return 0;
}

void tc() {
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
//        cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        cout<<el;
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
