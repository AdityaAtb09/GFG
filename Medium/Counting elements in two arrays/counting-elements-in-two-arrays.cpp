//{ Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int a1[], int a2[], int m, int n)
    {
    //Your code goes here
        vector<int>ans;
        sort(a2,a2+n);

        for(int i=0;i<m;i++){
            int s=0;
            int e=n-1;
            int mid=s+(e-s)/2;
                      int count=0;
              while(s<=e){
                  mid=s+(e-s)/2;
                  if(a1[i]>=a2[mid]){
                      count=mid+1;
                      s=mid+1;
                      
                  }
                  else 
                  e=mid-1;
              }
              ans.push_back(count);
              
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends