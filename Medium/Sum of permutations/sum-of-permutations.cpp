//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


long long getSum(int [],int n);
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<getSum(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this method */
long long getSum(int A[],int n)
{
    //Your code here
    long long sum = 0;
    
    sort(A, A+n);
    do
    {
        string s = "";
        for(int i=0;i<n;i++)
        {
            s += ('0'+A[i]);
        }
        
        long num = stol(s);
        sum=(sum+num)%1000000007;
    } while(next_permutation(A,A+n));
    
    return sum;
}