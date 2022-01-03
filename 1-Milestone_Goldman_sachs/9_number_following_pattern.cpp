
/*
Problem Link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1
Title: Number following a pattern 
Difficulty: Medium
Author: Madhav Anchala
Language: C++
*/

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string a){
        // code here 
        stack<int> s;
        string res = "";
        int num = 1;
        for(int i=0;i<a.length();i++)
        {
            char temp = a[i];
            if(temp=='D')
            {
                s.push(num++);
            }
            else
            {
                s.push(num++);
                while(!s.empty())
                {
                    string temp1 = to_string(s.top());
                    res += temp1;
                    s.pop();
                }
            }
        }
        s.push(num++);
        while(!s.empty())
        {
            string temp1 = to_string(s.top());
            res += temp1;
            s.pop();
        }
        return res;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 