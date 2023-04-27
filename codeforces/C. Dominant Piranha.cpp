//
// Created by ak on 4/24/23.
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
void solve() {
    int n;
    cin >> n;
    int arr[n];
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    if (arr[0] == mx and arr[0] > arr[1])cout << 1;
    else if (arr[n - 1] == mx and arr[n - 1] > arr[n - 2])cout << n;
    else {

        for (int i = 1; i <n-1; i++) {
                if(arr[i]==mx and (arr[i]>arr[i-1] or arr[i+1]<arr[i]))
                        return void(cout<<i+1);
        }
        cout<<"-1";
    }

}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
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
