/*
Problem Link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
Title: Count the subarrays having product less than k 
Difficulty: hard
Author: Madhav Anchala
Language: C++


*/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0;
        int j = 0;
        long long int sum = 1;
        long long int cnt=0;
        while(j<n)
        {
            sum *= a[j];
            while(i<n && sum>=k)
            {
                sum = sum/a[i];
                i++;
            }
            if(sum<k)
            {
                cnt += j-i+1;
            }
            j++;
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}