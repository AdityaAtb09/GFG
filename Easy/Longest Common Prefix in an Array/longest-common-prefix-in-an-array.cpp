//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
        string ans = "";
        string first = arr[0];
        string last = arr[N-1];
        int cnt = 0;
        
        for(int i=0; i<first.size(); i++)
        {
            if(first[i] == last[i])
            {
                ans = ans + first[i];
                cnt++;
            }
            else
            {
                if(cnt == 0)
                {
                    return "-1";
                }
                else
                {
                    return ans;
                }
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
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends