//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string a, string b)
    {
    	// Your code goes here
    	if(a.size() != b.size())
    	{
    	    return -1;
    	}
    	
        int n=a.size();
        int ans=0;
        unordered_map<char,int> mp;
        
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
            mp[b[i]]--;
        }
        
        for(auto i:mp)
        {
            if(i.second)
            {
                return -1;
            }
        }
        
        for(int i=n-1, j=n-1; i>=0; i--,j--)
        {
            while(i>=0 && a[i]!=b[j])
            {
                i--;
                ans++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}
// } Driver Code Ends