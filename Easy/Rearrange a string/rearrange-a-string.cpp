//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        map<char, int> m;
        string ans = "";
        int n = 0;
        
        for(auto it : str)
        {
            if(isalpha(it))
            {
                ans += it;
            }
            else
            {
                n += it-'0';
            }
        }
        
        sort(ans.begin(), ans.end());
        
        if(n > 0)
        {
            string num = to_string(n);
            ans += num;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends