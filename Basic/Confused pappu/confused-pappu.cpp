//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    //code
    string s = to_string(amount);
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '6')
        {
            s[i] = '9';
        }
    }
    
    long long ans = stoi(s);
    
    return abs(amount-ans);
}