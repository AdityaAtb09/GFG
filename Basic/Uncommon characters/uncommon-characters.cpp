//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char, int> mA, mB;
            string ans = "";
            
            for(auto ch : A)
            {
                mA[ch]++;
            }
            
            for(auto ch : B)
            {
                mB[ch]++;
            }
            
            for(auto it : mA)
            {
                if(mB.find(it.first) == mB.end())
                {
                    ans += it.first;
                }
            }
            
            for(auto it : mB)
            {
                if(mA.find(it.first) == mA.end())
                {
                    ans += it.first;
                }
            }
            
            sort(ans.begin(), ans.end());
            
            if(ans.length() == 0)
            {
                return ans = "-1";
            }
            
            return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends