//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans = "";
        s[0] = tolower(s[0]);
        
        for(int i=0; i<s.length(); i++)
        {
            if(isupper(s[i]))
            {
                ans.push_back(' ');
                ans.push_back(tolower(s[i]));
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}
// } Driver Code Ends