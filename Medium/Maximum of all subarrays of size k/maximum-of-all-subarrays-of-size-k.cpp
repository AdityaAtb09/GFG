//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int mx=0;
        vector<int>s;
        queue<int>q;
        // return s;
        
        for(int i=0;i<k;i++)
        {
            mx = max(mx,arr[i]);
            q.push(arr[i]);
        }
        int i=0;
        int j=k;
        s.push_back(mx);
        
        while(j<n)
        {
            
                i++;
            
                q.push(arr[j]);
                mx = max(mx,arr[j]);
                
                if(mx == q.front())
                {
                    
                    q.pop();
                    mx = q.front();
                    // cout<<mx<<"ji "<<i<<" ";
                    int x = i;
                    while(x<=j){
                        mx = max(mx,arr[x]);
                        x++;
                    }
                    
                }
                else q.pop();
                s.push_back(mx);
                j++;
                
            
        }
        
        return s;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends