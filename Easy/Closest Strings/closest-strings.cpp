//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		int c1 = INT_MAX, c2 = INT_MAX, ans = INT_MAX;
		
		for(int i=0; i<s.size(); i++)
		{
		    if(s[i] == word1)
		    {
		        c1 = i;
		        ans = min(ans, abs(c1-c2));
		    }
		    
		    if(s[i] == word2)
		    {
		        c2 = i;
		        ans = min(ans, abs(c1-c2));
		    }
		}
		
		return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends