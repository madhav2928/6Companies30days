/*
Problem Link: https://leetcode.com/problems/longest-mountain-in-array/
Title: Longest Mountain in Array
Difficulty: Medium
Author: Madhav Anchala
Language: C++

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n = a.size();
        vector<int> front(n,0);
        vector<int> back(n,0);
        front[0] = 1;
        back[n-1] = 1;
        for(int i=1;i<n;i++)
        {
            int sum = 0;
            if(a[i-1]<a[i])
            {
                sum = max(sum,front[i-1]);
            }
            front[i]+=sum+1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(a[i+1]<a[i])
            {
                back[i] = max(back[i],back[i+1]);
            }
            back[i] +=1;
        }
        int res = 0;
        for(int i=0;i<n;i++)
        {
            if(front[i]>1 && back[i]>1)
            {
                res = max(res,front[i]+back[i]-1);
            }
        }
        return res;
        
    }
};




int main(){
    int T;
    cin>>T;
    Solution s;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a[i] = temp;
        }
        cout<<s.longestMountain(a)<<endl;
    }
}