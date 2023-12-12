//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    int cnt = 0;
    unordered_map<char, int> m;
    
    for(auto ch : S)
    {
        m[ch]++;
    }
    
    for(auto it : m)
    {
        if(it.second%2)
        {
            cnt++;
        }
    }
    
    if(cnt > 1)
    {
        return 0;
    }
    
    return 1;
}