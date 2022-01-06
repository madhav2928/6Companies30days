/*
Problem Link: https://practice.geeksforgeeks.org/problems/maximum-profit4657/1
Title: Maximum Profit 
Difficulty: Hard
Author: Madhav Anchala
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int k, int n, int a[]) {
        // code here
        vector<vector<int> > dp(k+1,vector<int>(n,0));
        for(int i=1;i<=k;i++)
        {
            int maxs = -a[0];
            for(int j=1;j<n;j++)
            {
                dp[i][j] = max(dp[i][j-1],a[j]+maxs);
                maxs = max(maxs,dp[i-1][j]-a[j]);
            }
        }
        int res = dp[k][n-1];
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}