//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            return true;
        }
        
        return false;
    }
    
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
        string ans;
        int n = s.length();
        
        for(int i=0; i<n; i++)
        {
            if(isVowel(s[i]))
            {
                ans.push_back(s[i]);
            }
        }
        
        if(ans.empty())
        {
            ans = "No Vowel";
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends