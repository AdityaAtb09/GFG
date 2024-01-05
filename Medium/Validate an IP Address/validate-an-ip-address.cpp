//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int n=s.size();
            int dot_count=0;
            string substr;
            char ch;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='.')
                dot_count++;
                else{
                ch=s[i];
              
                int cnum=ch-'0';
               
                if(cnum>=0 && cnum<=9)
                {
                    
                    continue;
                }
                else{
                    return 0;
                }
                }
            }
            if(dot_count!=3)
            {
            return 0;
            }
            for(int j=0;j<=n;j++)
            {
                if(s[j]!='.' and j<n)
                {
                    substr+=s[j];
                }
                
                else{
                    if(!substr.empty()and substr.size()<=3)
                    {
                       // cout<<substr.length()<<endl;
                        
                        if (substr.length()>1 && substr[0] == '0') 
                        {
                        return 0;
                        }
                        int num=stoi(substr);
                        
                        if(num>=0 and num <=255)
                        {
                        substr="";
                        }
                        else
                        return 0;
                    }
                    else
                    return 0;
                }
            }
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends