//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string oddEven(string s) {
        // code here
        unordered_map<char, int> m;
        int X = 0, Y = 0;
        
        for(auto ch : s)
        {
            m[ch]++;
        }
        
        for(auto it : m)
        {
            if(int(it.first)%2!=0 && it.second%2!=0)
            {
                X++;
            }
            else if(int(it.first)%2==0 && it.second%2==0)
            {
                Y++;
            }
        }
        
        if((X+Y)%2 == 0)
        {
            return "EVEN";
        }
        
        return "ODD";
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
        cout << ob.oddEven(S) << endl;
    }
    return 0;
}

// } Driver Code Ends