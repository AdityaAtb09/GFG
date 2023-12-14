//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    int s = 0;
    map<char, int> m;
    
    for(auto ch : str1)
    {
        m[ch]++;
    }
    
    for(auto ch : str2)
    {
        m[ch]--;
    }
    
    for(auto it : m)
    {
        s += abs(it.second);
    }
    
    return s;
}