//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    bool isvowel(char ch)
    {
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
  
    void solve(int idx,string p,string s,set<string>&ans)
    {
      if(idx==s.size()+1) return ;
      if(!isvowel(p[p.size()-1])) 
      {
          ans.insert(p);
          
      }
        solve(idx+1,p+s[idx],s,ans);
        solve(idx+1,p,s,ans);
        p.pop_back();
    }
  
    set<string> allPossibleSubsequences(string s) {
        // code here
        set<string>ans;
        int n=s.size();
        for(int i=0;i<n-1;i++){
        
            if(isvowel(s[i])){
                string temp="";
                temp+=s[i];
                solve(i+1,temp,s,ans);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends