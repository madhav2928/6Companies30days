/*
Problem Link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
Title: Run Length Encoding
Difficulty: Easy
Author: Madhav Anchala
Language: C++


*/


#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string a)
{
    int cnt = 1;
    string res = "";
    int n = a.length();
    if(n==1)
    {
        res += a[0] + to_string(cnt);
        return res;
    }
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==a[i])
        {
            cnt++;
            if(i==n-1)
            {
                res+=a[i-1] + to_string(cnt);
            }
        }
        else
        {
            res += a[i-1] + to_string(cnt);
            cnt = 1;
            if(i==n-1)
            {
                res+=a[i] + to_string(cnt);
            }
        }
    }
    return res;
}     
 
