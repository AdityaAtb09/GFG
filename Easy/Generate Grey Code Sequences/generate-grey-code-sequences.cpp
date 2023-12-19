//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution{
  public:
  
    vector<string> fun(int n)
    {
        vector<string> ans;
        
        if(n == 1)
        {
            return {"0", "1"};
        }
        
        vector<string> temp = fun(n-1);
        
        for(int i=0; i<temp.size(); i++)
        {
            ans.push_back("0" + temp[i]);
        }
        
        for(int i=temp.size()-1; i>=0; i--)
        {
            ans.push_back("1" + temp[i]);
        }
        
        return ans;
    }
    
    vector <string> generateCode(int N)
    {
         //Your code here
         return fun(N);
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		vector <string> res = obj.generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	return 0;
}


// } Driver Code Ends