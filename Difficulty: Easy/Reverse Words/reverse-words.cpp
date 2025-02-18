//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        // code here
        vector<string> words;
        string temp = "", ans = "";
        
        for(int i=0; i<s.length(); i++) {
            if(s[i]!=' ')
                temp += s[i];
            else if(temp!="") {
                words.push_back(temp);
                temp.clear();
            }
        }
        
        if(!temp.empty())
            words.push_back(temp);
        
        for(int i=words.size()-1; i>=0; i--) {
            ans += words[i] + " ";
        }
        
        ans.pop_back();
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;     // Read the number of test cases
    cin.ignore(); // Consume the newline character after reading the integer

    while (t--) {
        string s;
        getline(cin, s); // Read the string input

        string str = s.substr(1, s.size() - 2); // Remove surrounding quotes
        Solution obj;                       // Create an object of the Solution class
        string ans = obj.reverseWords(str); // Reverse the words in the string
        cout << '"';                        // Print opening quote
        cout << ans;                        // Print the result
        cout << '"';                        // Print closing quote
        cout << endl;                       // Print a newline
    }
    return 0; // Return 0 to indicate successful execution
}

// } Driver Code Ends