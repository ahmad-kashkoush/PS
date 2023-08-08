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
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
void solve() {
    int sum, limit;
    cin >> sum >> limit;
    int mx = min(limit, 32);
    int newSum = 0;
    vector<int> tmp;
    for (int i = limit;i > 0;i--) {
        if (newSum + (i & (~(i - 1))) <= sum) {
            newSum += (i & (-i));
            tmp.emplace_back(i);
        }
        if (sum == newSum) {
            cout << tmp.size() << el;
            cout(tmp);
            return;
        }
    }
    cout << -1;
}
int main() {
    judge();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
        // cout<<"Enter Number: ";
        // // cout<<endl;
        // int i;cin>>i;
        // cout<<((i)&(-i))<<"  "<<((i) & (~(i-1)));
        // cout<<endl;
    }

    return 0;
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
//     freopen("../error.txt", "w", stderr);
// #endif
}

/* 
 ! Trick
? If You want first 2^k bit in the number, for example:
    110---you want--> 10, 101000000--> you want-->1000000
    you can do the following :
    . let i=110
    . get ~(i-1)--> ~(101)=010
  *  . do (i)&(-i)==>   110 & 010= 010=10 [What I want]

 */