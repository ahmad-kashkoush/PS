//
// Created by ak on 7/11/23.
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
void solve(){
    map<int, int> out;
    int tc, p, min, cur;
    char s[10001];

    scanf("%d", &tc);
    while (tc--) {
        out.clear();
        scanf("%d\n", &p);
        min = 100000000;
        for (int i = 1; i <= p; i++) {
            gets(s);
            cur = 1;
            for (int j = 0; s[j] != '\0'; j++)
                if (s[j] == ' ')
                    cur++;
            out[i] = cur;
            if (cur < min)
                min = cur;
        }

        bool first = true;
        for (int i = 1; i <= p; i++) {
            if (out[i] == min) {
                if (!first)
                    printf(" ");

                printf("%d", i);
                first = false;
            }
        }
        printf("\n");
    }
}
int main() {
    judge();
    int t=1;

    while(t--){
        solve();
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

