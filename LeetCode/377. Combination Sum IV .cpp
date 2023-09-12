//
// Created by ak on 9/6/23.
//
#include<bits/stdc++.h>
using namespace std;
class Solution {
    vector<int> v;
    int tar;
    const int n=2000;
    vector<int> mem(n);
public:
    int rec(int num, vector<int> &nums) {
        if(num==0)return 1;
        int ret=mem[num];
        int ans = 0;
        for (auto i: nums) {
            if (i <= num) ans +=  rec(num - i, nums);
        }
        return ans;
    }

    int combinationSum4(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(target>=nums[i])ans+=rec(target-nums[i], nums);
        }
        return ans;
    }

    void Enter() {
        int n;
        cin >> n >> tar;
        v.resize(n);
        for (auto &i: v)cin >> i;

    }

    void print() {
        Enter();
        cout<<(combinationSum4(v, tar));
    }

};



void judge();
int main(){
    judge();
//    cout<<"Hello";
    Solution sol;
    sol.print();

}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
