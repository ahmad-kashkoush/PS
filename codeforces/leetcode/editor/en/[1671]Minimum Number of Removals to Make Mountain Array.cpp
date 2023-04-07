//You may recall that an array arr is a mountain array if and only if: 
//
// 
// arr.length >= 3 
// There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that: 
//
// 
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 
// 
// 
//
// Given an integer array nums, return the minimum number of elements to remove 
//to make nums a mountain array. 
//
// 
// Example 1: 
//
// 
//Input: nums = [1,3,1]
//Output: 0
//Explanation: The array itself is a mountain array so we do not need to remove 
//any elements.
// 
//
// Example 2: 
//
// 
//Input: nums = [2,1,1,5,6,2,3,1]
//Output: 3
//Explanation: One solution is to remove the elements at indices 0, 1, and 5, 
//making the array nums = [1,5,6,3,1].
// 
//
// 
// Constraints: 
//
// 
// 3 <= nums.length <= 1000 
// 1 <= nums[i] <= 10⁹ 
// It is guaranteed that you can make a mountain array out of nums. 
// 
//
// Related Topics Array Binary Search Dynamic Programming Greedy 👍 1168 👎 18


//leetcode submit region begin(Prohibit modification and deletion)
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
            if(lis(i)==1||lds(i)==1)
                continue;
            int tmp=lis(i)+lds(i)-1;
            ans=max(ans, tmp);
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

//leetcode submit region end(Prohibit modification and deletion)
