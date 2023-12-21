//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool passed (string s) {
        //code here.
        int n = s.length();
        string t1 = "", t2 = "";
        
        for(int i=0; i<n/2; i++)
        {
            t1 += s[i];
        }
        
        for(int i=n/2; i<n; i++)
        {
            t2 += s[i];
        }
        
        if(n%2 != 0)
        {
            t2.erase(0, 1);
        }
        
        map<char, int> m1, m2;
        
        for(auto it : t1)
        {
            m1[it]++;
        }
        
        for(auto it : t2)
        {
            m2[it]++;
        }
        
        return m1==m2;
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
        if (ob.passed (s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
// } Driver Code Ends