//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string stringSort (string s)
    {
        //code here.
        string small, capital, ans;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                small += s[i];
            }
            else
            {
                capital += s[i];
            }
        }
        
        sort(small.begin(), small.end());
        sort(capital.begin(), capital.end());
        
        int i = 0, n1 = small.length(), n2 = capital.length();
        
        while(i<n1 && i<n2)
        {
            ans += capital[i];
            ans += small[i];
            i++;
        }
        
        while(i<n1)
        {
            ans += small[i];
            i++;
        }
        
        while(i<n2)
        {
            ans += capital[i];
            i++;
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
        string s; cin >> s;
        Solution ob;
        cout <<ob.stringSort (s) << endl;
    }
}

// Contributes By: Pranay Bansal
// } Driver Code Ends