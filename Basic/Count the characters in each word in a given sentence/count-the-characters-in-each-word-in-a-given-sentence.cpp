//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    vector<int> countChars (string s)
    {
        // code here
        vector<int> ans;
        int cnt = 0;
        
        for(int i=0; i<s.length(); i++)
        {
            
            if(s[i] != ' ')
            {
                cnt++;
            }
            else
            {
                ans.push_back(cnt);
                cnt = 0;
            }
        }
        ans.push_back(cnt);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; 
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        vector <int> result = ob.countChars(s);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
}
// } Driver Code Ends