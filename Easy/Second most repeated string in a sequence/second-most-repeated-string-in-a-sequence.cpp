//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string, int> m;
        string ans = "";
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            m[arr[i]]++;
        }
        
        for(auto it : m)
        {
            if(it.second>max1)
            {
                max1 = it.second;
            }
        }
        
        for(auto it : m)
        {
            if(it.second>max2 && it.second!=max1)
            {
                max2 = it.second;
                ans = it.first;
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
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends