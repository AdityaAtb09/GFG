//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    // Code here
	    set<char> st;
	    string ans;
	    
	    for(int i=0; i<patt.length(); i++)
	    {
	        st.insert(patt[i]);
	    }
	    
	    for(int i=0; i<S.length(); i++)
	    {
	        if(st.find(S[i]) != st.end())
	        {
	            ans.push_back(S[i]);
	            return ans;
	        }
	    }
	    
	    return "$";
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends