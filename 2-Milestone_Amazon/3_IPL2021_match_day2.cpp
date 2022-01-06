/*
Problem Link: https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/
Title: IPL 2021 match day 2 
Difficulty: Medium
Author: Madhav Anchala
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
//first attempt
        // set<int> a;
        // for(int i=0;i<k;i++)
        // {
        //     a.insert(arr[i]);
        // }
        // vector<int> res;
        // for(int i=k;i<n;i++)
        // {
        //     int temp = *(a.rbegin());
        //     res.push_back(temp);
        //     a.erase(arr[i-k]);
        //     a.insert(arr[i]);
        // }
        // int temp1 = *(a.rbegin());
        // res.push_back(temp1);
        // return res;
//second attempt
        // map<int,int> a;
        // for(int i=0;i<k;i++)
        // {
        //     a[arr[i]] = i;
        // }
        // vector<int> res;
        // for(int i=k;i<n;i++)
        // {
        //     int temp = a.rbegin()->first;
        //     res.push_back(temp);
        //     auto it = a.find(arr[i-k]);
        //     a.erase(it);
        //     a[arr[i]] = i;
        // }
        // int temp1 = a.rbegin()->first;
        // res.push_back(temp1);
        // return res;
        
        deque<int> a(k);
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            while(!a.empty() && arr[i]>=arr[a.back()])
            {
                a.pop_back();
            }
            a.push_back(i);
        }
        for(int i=k;i<n;i++)
        {
            res.push_back(arr[a.front()]);
            while(!a.empty() && a.front()<=i-k)
            {
                a.pop_front();
            }
            
            while(!a.empty() && arr[i]>=arr[a.back()])
            {
                a.pop_back();
            }
            
            a.push_back(i);
        }
        res.push_back(arr[a.front()]);
        return res;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
