#include<bits/stdc++.h>
using namespace std;

class Solution {
    int n;
    int dp1[1002], dp2[1002];
    vector<int> v;
public:
    int minimumMountainRemovals(vector<int>& nums) {
        n=nums.size();
        v=nums;

        memset(dp1, -1, sizeof(dp1));
        memset(dp2, -1, sizeof(dp2));
        int ans=0;// get maximum sorted sequence
        for(int i=0;i<n;i++){
            int x=lis(i);
            int y=lds(i);
            if(x==1||y==1)
                continue;
            ans=max(ans, x+y-1);
        }
        return n-ans;
    }
    int lis(int cur){// [0, mid]
        if(cur==-1)
            return 0;
        int &ret=dp1[cur];
        if(ret!=-1)return ret;
        ret=0;
        for(int i=cur-1;i>=0;i--)
            if(v[i]<v[cur])
                ret=max(ret,lis(i));
        ret+=1;
        return ret;

    }
    int lds(int cur){
        if(cur==n)
            return 0;

        int &ret=dp2[cur];
        if(ret!=-1)return ret;
        ret=0;
        for(int i=cur+1;i<n;i++)
            if(v[i]<v[cur])
                ret=max(ret, lds(i));

        ret+=1;
        return ret;
    }

};
int main(){
    int arr[]={1, 2,3, 4, 5, 6, 9};
//     search space
    int l=0, r=5;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]>=3){// lower bound
                ans=arr[mid];
                r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;

}