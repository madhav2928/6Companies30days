/*
Problem Link: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/
Title: Ugly numbers
Difficulty: Hard
Author: Madhav Anchala
Language: C++


*/


#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<long long int> a;
	    a.insert(1);
	    n--;
	    while(n--)
	    {
	        auto it = a.begin();
	        long long int temp = *it;
	        a.erase(it);
	        a.insert(temp*2);
	        a.insert(temp*3);
	        a.insert(temp*5);
	    }
	    return *a.begin();
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}