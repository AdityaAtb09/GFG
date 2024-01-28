//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends



class Solution
{
    public:
    //Function to return maximum sum subarray by removing at most one element.
    int maxSumSubarray(int A[], int n)
    {
        //Your code here
        int lmaxsum[n];
        int rmaxsum[n];
        lmaxsum[0]=0;
        rmaxsum[n-1]=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=A[i];
        }
        for(int i=1;i<n;i++)
        {
            lmaxsum[i]=max(A[i-1],A[i-1]+lmaxsum[i-1]);     
            
        }
        for(int i=n-2;i>=0;i--)
        {
            rmaxsum[i]=max(A[i+1],A[i+1]+rmaxsum[i+1]);
        }
        int res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            res=max(res,lmaxsum[i]+rmaxsum[i]);
        }
        for(int i=1;i<n;i++)
        {
            res=max(res,lmaxsum[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            res=max(res,rmaxsum[i]);
        }
        return max(res,ans);
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	
	//taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking total elements
		int n;
		cin>>n;
		int a[n];
		
		//inserting elements in the array
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		
		//calling method maxSumSubarray()
		Solution obj;
		cout<<obj.maxSumSubarray(a,n)<<endl;
	}
}


// } Driver Code Ends