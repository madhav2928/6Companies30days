/*
Problem Link: https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/#
Title: Total Decoding Messages
Difficulty: Medium
Author: Madhav Anchala
Language: C++
*/



#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	    int mod = 1000000007;
		int CountWays(string str){
		    // Code here
		    if(str.size()<1)
		    {
		        return 0;
		    }
		    if(str[0]=='0')
		    {
		        return 0;
		    }
		    if(str.size()==1)
		    {
		        return 1;
		    }
		    int l1 = 1;
		    int l2 = 1;
		    for(int i=1;i<str.size();i++)
		    {
		        int d1 = str[i]-'0';
		        int d2 = (str[i-1]-'0')*10 +d1;
		        int sum = 0;
		        if(d1>=1)
		        {
		            sum = (sum+l2)%mod;
		        }
		        if(d2>9 && d2<=26)
		        {
		            sum = (sum+l1)%mod;
		        }
		        l1 = l2;
		        l2 = sum;
		    }
		    return l2%mod;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}