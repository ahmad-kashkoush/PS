//
// Created by ahmed-kashkoush on 1/18/23.
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
int n;
int *arr;
// 1-->3-->2
// 1-->2
//2-->3-->1
int mem[101][4];
int rec(int i, int prev){
    if(i==n)
        return 0;
    /*
     0-->1+(i+1, 0)
     1, 2--> same 1+(i+1, 0), diff (i+1, i)
     3 .
        -0--> (i+1, 1), (i+1, 2)
        -1--> (i+1, 3-1)

     * */
//    cout<<prev<<" ";
    int &ret=mem[i][prev];
    if(ret!=-1)
        return ret;

    if(arr[i]==0||prev-arr[i]==0)
        return ret=1+rec(i+1, 0);
    else if(arr[i]==3){
        if(prev==0)
            return ret=min(rec(i+1, 2), rec(i+1, 1));
        else
            return ret=rec(i+1, 3-prev);
    }
    return ret=rec(i+1, arr[i]);




}
void solve() {
    cin>>n;
    arr=new int[n];
   for(int i=0;i<n;i++)
       cin>>arr[i];
   reset(mem, -1);
   int x=rec(0, 0);
   cout<<x;

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}

void tc() {
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        cout<<"#tc"<< tc<<": ";
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