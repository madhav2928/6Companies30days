
/*

problem link : https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/#
problem name : Possible Words From Phone Digits
problem hardness : Medium 


*/






#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    
    
    void help(vector<string> phone,vector<string>& res,int a[],int i,int n,string ans)
    {
        if(i==n)
        {
            res.push_back(ans);
            return ;
        }
        string temp= phone[a[i]];
        for(auto j: temp)
        {
            ans.push_back(j);
            help(phone ,res,a,i+1,n,ans);
            ans.pop_back();
        }
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> phone {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        vector<string> res;
        if(N==0)
        {
            return res;
        }
        string temp = "";
        help(phone,res,a,0,N,temp);
        return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}