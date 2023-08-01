//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define all(s)  s.begin(), s.end()
using namespace std;
bool canFormPalindrome(string a){
    map<char, int> cnt;
    string res="";
    for(auto i:a)
        cnt[i]++;

    int odd=0;
    char ch;
    for(auto i:a){
       if(cnt[i]&1){
        odd++;
        ch=i;
       }

    }
    return odd<=1;
}
string getPalindrome(string str)
{

    // Store counts of characters
    unordered_map<char, int> hmap;
    for (int i = 0; i < str.length(); i++)
        hmap[str[i]]++;

    /* find the number of odd elements.
       Takes O(n) */
    int oddCount = 0;
    char oddChar;
    for (auto x : hmap) {
        if (x.second % 2 != 0) {
            oddCount++;
            oddChar = x.first;
        }
    }
    string firstHalf = "", secondHalf = "";
    for (auto x : hmap) {

        string s(x.second / 2, x.first);
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }


    return (oddCount == 1)
               ? (firstHalf + oddChar + secondHalf)
               : (firstHalf + secondHalf);
}

int main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0),cout.tie(0);
    int t; cin>>t;

    for(int tt=1;tt<=t;tt++){
        map<string, int> vis;
        string s; cin>>s;
        vector<string> ans;
        int n=s.size();
        for(int i=0;i<(1<<n);i++){
            map<char, int> m;
            string a, b;
            for(int j=0;j<n;j++){
                if((i>>j)&1){
                    a+=s[j];
                    m[j]++;
                }
            }
            for(int j=0;j<n;j++){
                if(!m[j])b+=s[j];
            }

            if(canFormPalindrome(a)&&canFormPalindrome(b)&&!a.empty()&&!b.empty()){
               a= getPalindrome(a);
               b= getPalindrome(b);
                ans.emplace_back(a);
                ans.emplace_back(b);
                vis[a]++, vis[b]++;
            }


            a.clear();b.clear();
        }

        cout<<"Case "<<tt<<": ";
        if(ans.empty()){
            if(canFormPalindrome(s))
                cout<<getPalindrome(s)<<el;
            else
                cout<<"NO SOLUTION"<<el;
        }else{
            sort(all(ans));
            cout<<ans[0]<<el;
        }
        ans.clear();
    }

}










