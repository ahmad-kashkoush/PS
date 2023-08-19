//
// Created by ak on 2/1/2023.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
/**
    [need]
    1. count complete subsequences
    2. return n-complete subsequnces
    [how]
    - let's first know that every index of our complete sequence can form
    a small subsequence from it, How?
        4,8,15,16,23,42
        sub[0]=4
        sub[1]=4, 8
        sub[2]=4, 8, 15
        and so on ....
    - so we need to store the indecies from the input
    -, then count number of complete subs in our array
    - but how?
        if(index=0) then our sub is [4]
        else if(index=1) then we have 2 conditions
        1. we've sub[0], then we merge it with index 1 to have [4, 8]
        2. otherwise the order is corrupted so do nothing
    - so we'll do so and number of completed sequences will be seq[5]
    -we return n-seq[5]*6



*/
#include<bits/stdc++.h>

#define el '\n'
using namespace std;

void judge();

void tc();
void solve() {
   int n; cin>>n;
   int arr[]={4,8,15,16,23,42};
   int idx[45];
   for(int i=0;i<6;i++)
       idx[arr[i]]=i;
    int sub[6]={0, 0, 0, 0, 0, 0};
   for(int i=0;i<n;i++){
       int c; cin>>c;
       int id=idx[c];
       if(id==0)
           sub[id]++;
       else{
           if(sub[id-1]!=0){
               sub[id]++;
               sub[id-1]--;
           }
       }
   }
   cout<<n-sub[5]*6;




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
//        cout<<el;
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
