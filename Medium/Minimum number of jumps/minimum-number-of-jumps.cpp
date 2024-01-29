//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jumpCount = 0, maxReachable = 0, current = 0;

        for(int i=0; i<n; i++){
            maxReachable = max(maxReachable, i+arr[i]);
            if(current==i){
                if(i!=n-1)
                    jumpCount++;
                current = maxReachable;
            }
        }
        if(current < n-1)
            return -1;
        return jumpCount;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends