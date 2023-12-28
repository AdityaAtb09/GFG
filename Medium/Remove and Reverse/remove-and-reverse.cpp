//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        // code here
        int cnt=0, n=s.size();         
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        int b=0,e=n-1;

        while(b<e){         
        while(b<e && mp[s[b]]==1) b++;
            if(mp[s[b]]>1){
               
                mp[s[b]]--;
                s[b]='#';
                cnt++;
                
            }
            while(e>b && mp[s[e]]==1) e--;
             if(mp[s[e]]>1 ){
                
                mp[s[e]]--;
                s[e]='#';
                cnt++;
            }
            b++; e--;  
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!='#') ans+=s[i];
        }
        if(cnt%2!=0) reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends