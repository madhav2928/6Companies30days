
/*
Problem Link: https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1#
Title:  Array Pair Sum Divisibility Problem
Difficulty: Easy
Author: Madhav Anchala
Language: C++
*/



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            nums[i] = nums[i]%k;
            m[nums[i]]++;
        }
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                int temp1 = nums[i];
                if(temp1==0)
                {
                    if(m[temp1]%2!=0)
                    {
                        return false;
                    }
                }
                else
                {
                    int temp2 = k- temp1;
                    if(temp2==temp1 && m[temp1]%2!=0)
                    {
                        return false;
                    }
                    if(m.find(temp2)==m.end())
                    {
                        return false;
                    }
                    if(m[temp1]!=m[temp2])
                    {
                        return false;
                    }
                }
                
            }
            return true;
        }
        else
        {
            return false;
        }
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}