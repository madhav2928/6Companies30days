
/*
Problem Link: https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1
Title: K largest elements 
Difficulty: Basic
Author: Madhav Anchala
Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int> a;
        for(int i=0;i<n;i++)
        {
            a.push(arr[i]);
        }
        vector<int> res(k,0);
        for(int i=0;i<k;i++)
        {
            int temp = a.top();
            res[i] = temp;
            a.pop();
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}