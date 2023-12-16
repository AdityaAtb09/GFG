//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        unordered_map<char, int> m;
        string ans = "";
        
        for(auto ch : s2)
        {
            m[ch]++;
        }
        
        for(auto ch : s1)
        {
            if(!m[ch])
            {
                ans += ch;
            }
        }
        
        m.clear();
        
        for(auto ch : s1)
        {
            m[ch]++;
        }
        
        for(auto ch : s2)
        {
            if(!m[ch])
            {
                ans += ch;
            }
        }
        
        if(ans == "")
        {
            return "-1";
        }
        
        return ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends