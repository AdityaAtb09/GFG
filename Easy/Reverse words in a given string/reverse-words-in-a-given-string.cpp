//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string> v;
        string ans = "", temp = "";
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != '.')
            {
                temp += s[i];
            }
            else
            {
                v.push_back(temp);
                temp.clear();
            }
        }
        v.push_back(temp);
        reverse(v.begin(), v.end());
        
        for(auto it : v)
        {
            ans = ans+it+".";
        }
        ans.pop_back();
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends