/*
Problem Link: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
Title: Print Anagrams Together
Difficulty: Medium
Author: Madhav Anchala
Language: C++


*/

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& a) {
        //code here
        vector<vector<string> > res;
        unordered_map<string,vector<string>> m;
        for(auto i:a)
        {
            string sum = i;
            sort(sum.begin(),sum.end());
            m[sum].push_back(i);
        }
        for(auto i:m)
        {
            res.push_back(i.second);
        }
        return res;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}