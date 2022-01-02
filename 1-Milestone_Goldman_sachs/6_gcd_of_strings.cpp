
/*
Problem Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/submissions/
Title: Greatest common divisor of strings
Difficulty: Easy
Author: Madhav Anchala
Language: C++


*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string res = "";
        string temp = "";
        int n = str1.length();
        int m = str2.length();
        int i=0;
        while(i<n && i<m)
        {
            if(str1[i]==str2[i])
            {
                temp +=str1[i];
                int k = temp.length();
                
                if(n%k==0 && m%k==0)
                {
                    res = temp;
                }
                
            }
            else
            {
                break;
            }
            i++;
        }
        int t = res.length();
        string temp1 = "";
        string temp2 = "";
        if(res=="")
        {
            return res;
        }
        else
        {
            for(int i=0;i<n/t;i++)
            {
                temp1 += res;
            }
            for(int i=0;i<m/t;i++)
            {
                temp2 += res;
            }
            if(temp1==str1 && temp2==str2)
            {
                return res;
            }
            else
            {
                res = "";
                return res;
            }
        }
    }
};
int main(){
    int T;
    cin>>T;
    Solution s;
    while(T--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<s.gcdOfStrings(s1,s2)<<"\n";
    }
}