//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    string ans = "";
	    
	    for(int i=0; i<s.length(); i++)
	    {
	        if(isalpha(s[i]))
	        {
	            ans += s[i];
	        }
	    }
	    
	    int n = ans.length();
	    
	    for(int i=0; i<n/2; i++)
	    {
	        if(ans[i] != ans[n-i-1])
	        {
	            return false;
	        }
	    }
	    
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends