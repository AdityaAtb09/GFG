//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        // Complete the function
        unordered_map<string, int> freq;
        string word = "";
        int m = 0;
        for(char c: s) 
        {
            if(c == ' ') 
            {
                freq[word]++;
                m = max(m, freq[word]);
                word = "";
            }
            else
                word += c;
        }
        
        freq[word]++;
        m = max(m, freq[word]);
        word = "";
    
        for(char c: s) 
        {
            if(c == ' ') 
            {
                if(freq[word] == m) 
                {
                    word = word + " " + to_string(m);
                    return word;
                }
                word = "";
            }
            else
                word += c;
        }
        
        word = word + " " + to_string(m);
    
        return word;
}

