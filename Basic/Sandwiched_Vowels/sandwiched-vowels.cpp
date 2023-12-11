//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            return true;
        }
        
        return false;
    }
    
    public:

    string Sandwiched_Vowel(string s){
        // Your code goes here
        int n = s.length();
        string ans = "";
        
        for(int i=0; i<n; i++)
        {
            if(isVowel(s[i]) && !isVowel(s[i-1]) && !isVowel(s[i+1]) && i!=0 && i!=n-1)
            {
                continue;
            }
            
            ans.push_back(s[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends