//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int solve(string s);
int main()
{
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
        
    }
}
// } Driver Code Ends



int solve(string N)
{
    //code here
    map<char, int> m;
    int maxi = INT_MIN;
    
    for(auto ch : N)
    {
        m[ch]++;
    }
    
    char ch;
    
    for(auto it : m)
    {
        if(it.second >= maxi)
        {
            maxi = it.second;
            ch = it.first;
        }
    }
    
    int ans = int(ch)-'0';
    
    return ans;
}
