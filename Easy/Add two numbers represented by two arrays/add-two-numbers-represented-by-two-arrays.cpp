//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
        string result = "";
        int i = n - 1, j = m - 1, carry = 0, sum = 0;
    
        while(i >= 0 || j >= 0) 
        {
            sum = carry;
            if(i >= 0)
                sum += a[i--];
            if(j >= 0)
                sum += b[j--];
            result = to_string(sum % 10) + result;
            carry = sum / 10;
        }
        if(carry > 0)
            result = to_string(carry) + result;
        for(i = 0; i<result.size(); i++)
            if(result[i] != '0')
                break;
    return result.substr(i);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
// } Driver Code Ends