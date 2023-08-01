//
// Created by ak on 7/19/23.
//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*


 */
int main() {
    ios::sync_with_stdio(0);
    int p; cin>>p;
    int arr[p];
    memset(arr, -1, sizeof(arr));
    for(ll x=0;x<=p/2;x++){
        arr[(ll)x*x%p]=x;
    }
    for(int i=0;i<p;i++){
        cout<<arr[i]<<" ";
    }

}
