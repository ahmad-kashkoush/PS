//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->https://codeforces.com/contest/1367/problem/C
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
// lengh of subsegment(0)=r(where s[r]==1)-l(where s[l]==1)
// number of ones we can add= (length+k)/k+1;
// first sub=a[0]/k+1;
// last sub=(n-last one index-1)/k+1
// middle sub=(a[r]-a[r]-1-k)/k+1--> i put -k to make sure that sub is bigger than k and i can add ones in this sub

void solve(){
    int n, k; cin>>n>>k;
    string s; cin>>s;
    vector<int> ones;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            ones.push_back(i);
    }
    if (ones.empty()){
        cout<<(n+k)/(k+1);
    }else{
        int ans=0;
        ans+=ones[0]/(k+1);// first sub;
        int i;
        for( i=0;i<(int)ones.size()-1;i++){
            ans+=(ones[i+1]-ones[i]-1-k)/(k+1);//-k to assure the distance is bigger than k
        }
        ans+=(n-ones.back()-1)/(k+1);
        cout<<ans;

    }
    cout<<el;
}
void solve2(){
    // if first, then window is equal k
    // if last, same with first
    // if in the middle  the window is equal 2*k+1;
    int n, k; cin>>n>>k;
    string a; cin>>a;

    int tmp=k;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!='0'){
            ans+=(tmp)/(2*k+1);
            tmp=0;
        }else tmp++;
    }
    ans+=(tmp)/(k+1);
    cout<<ans<<el;
}
int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve2();
    return 0;


}









