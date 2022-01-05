
/*
Problem Link: https://leetcode.com/problems/minimum-size-subarray-sum/
Title: Minimum Size Subarray Sum
Difficulty: Medium
Author: Madhav Anchala
Language: C++
*/



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int i=0;
        int j = 0;
        int res = INT_MAX;
        while(j<n)
        {
            sum = sum +nums[j];
            if(sum>=target)
            {
                res = min(res,j-i+1);
                while(sum>=target)
                {
                    sum = sum -nums[i];                    
                    i++;
                    if(sum>=target)
                    {
                        res = min(res,j-i+1);
                    }
                }
            }
            j++;
        }
        if(res>n)
        {
            return 0;
        }
        return res;
    }
};






int main(){
    int T;
    cin>>T;
    Solution s;
    while(T--){
        int t = 7;
        vector<int> a = {2,3,1,2,4,3};
        cout<<s.minSubArrayLen(t,a)<<"\n";
    }
}