//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    bool checkBinary (string s)
    {
        // Your Code Here
        return s.find( '1', s.find( '0', s.find( '1' ))) == -1;
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		if (ob.checkBinary (s))
			cout << "VALID\n";
		else
			cout << "INVALID\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends