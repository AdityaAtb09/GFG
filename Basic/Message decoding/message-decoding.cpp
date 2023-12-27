//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    // your code here
    string ans = "hello";
    int cnt=0;
    int j=0;
    
    for(int i=0; i<S.length(); i++)
    {
        if(ans[j] == S[i])
        {
            j++;
            cnt++;
        }
    }
    
    if(cnt==5)
    {
        return 1;
    }
    else
    { 
        return 0;
    }
}