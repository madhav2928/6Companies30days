
/*
Problem Link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
Title:  Find Missing And Repeating 
Difficulty: Medium
Author: Madhav Anchala
Language: C++
*/


#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
        int* res = new int[2];
        for(int i=0;i<n;i++)
        {
            if(a[abs(a[i])-1]<0)
            {
                res[0] = abs(a[i]);
            }
            else
            {
                a[abs(a[i])-1] = -a[abs(a[i])-1];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                res[1] = i+1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}