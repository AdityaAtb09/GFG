//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	string findRollOut(string s, long long arr[], int n)
	{
	    // Your code goes here
	    vector<long long> v(n+1,0);
	    
	    for(int i=0; i<n; i++)
	    {
	        v[0]++;
	        v[arr[i]]--;
	    }
	    
	    for(int i=1; i<n+1; i++)
	    {
	       v[i] = v[i]+v[i-1]; 
	    }
	    
	    for(int i=0; i<n; i++)
	    {
	       long long val = (v[i]+(s[i]-'a'))%26;
	       s[i]='a'+val;
	    }
	    
	    return s;
	}
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        string s;
        cin>>s;
        long long roll[n];
        for(int i=0;i<n;i++)
            cin>>roll[i];

       

        Solution ob;

        string res = ob.findRollOut(s, roll, n);
        cout << res;
		

        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends