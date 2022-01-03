

/*
Problem Link: https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1
Title: Find the position of M-th item
Difficulty: Basic
Author: Madhav Anchala
Language: C++


*/


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        if(N==1)
        {
            return 1;
        }
        int pos = M%N + K - 1;
        if(pos==N)
        {
            return pos;
        }
        else
        {
            return pos%N;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}