
/*
Problem Link: https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#
Title:  Decode the string 
Difficulty: Easy
Author: Madhav Anchala
Language: C++
*/


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    
    bool is(char a)
    {
        return (a>='0' && a<='9');
    }
    string help(string &a,int n,int &i)
    {
        string res = "";
        int num = 0;
        for(;i<n;i++)
        {
            if(is(a[i]))
            {
                num = num*10 + (a[i]-'0');
            }
            else if(a[i]=='[')
            {
                i++;
                string temp = help(a,n,i);
                while(num--)
                {
                    res +=temp;
                }
                num=0;
            }
            else if(a[i]==']')
            {
                return res;
            }
            else
            {
                res+=a[i];
            }
        }
        return res;
        
    }
    string decodedString(string s){
        // code here
        int i=0;
        int n = s.length();
        return help(s,n,i);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}