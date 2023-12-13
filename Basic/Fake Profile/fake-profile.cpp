//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}

// } Driver Code Ends


bool isConsonent(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        return false;
    }
    
    return true;
}

string solve(string a) {
    // code here
    set<char> s;
    int cnt = 0;
    string ans;
    
    for(auto ch : a)
    {
        s.insert(ch);
    }
    
    for(auto it : s)
    {
        if(isConsonent(it))
        {
            cnt++;
        }
    }
    
    if(cnt%2 != 0)
    {
        ans = "HE!";
    }
    else
    {
        ans = "SHE!";
    }
    
    return ans;
    
}