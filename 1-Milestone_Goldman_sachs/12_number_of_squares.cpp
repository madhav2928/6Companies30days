
/*
Problem Link: https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1
Title:  Squares in N*N Chessboard 
Difficulty: Easy
Author: Madhav Anchala
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        long long int res = (((n*(n+1))/2)*(2*n+1)/3);
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}