//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string getCrazy (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << getCrazy (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


string getCrazy (string S)
{
    // your code here
    for(int i=0; i<S.length()-1; i++)
    {
        if(islower(S[i]))
        {
            S[i+1] = toupper(S[i+1]);
        }
        else if(isupper(S[i]))
        {
            S[i+1] = tolower(S[i+1]);
        }
    }
    
    return S;
}