//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        unordered_map<char,int> mpp;
        int mini = INT_MAX;
        
        for(int i=0; i<str.length(); i++)
        {
            mpp[str[i]]++;
        }
        
        int nums = mpp.size();
        mpp.clear();
        int start = 0, end = 0;
        
        while(end < str.size())
        {
            mpp[str[end]]++;
            
            if(mpp.size() < nums)
            {
                end++;
            }
            else if(mpp.size() == nums)
            {
                while(mpp.size() == nums)
                {
                    mini = min(mini, end-start+1);
                    mpp[str[start]]--;
                    
                    if(mpp[str[start]] == 0)
                    {
                        mpp.erase(str[start]);
                    }
                    start++;
                }
                end++;
            }
        }
        
        return mini;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends