//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        long long int ans = 0;
        int one = arr[0], zero = (arr[0] == 0);
        unordered_map<int, int> mp;
        
        mp[one - zero] = mp[0] = 1;
        
        for (int i = 1; i < n; ++i) {
            
            one += arr[i], zero += (arr[i] == 0);
            
            if (one == zero) ans += mp[0];
            else ans += mp[one - zero];
            
            mp[one - zero]++;
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
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends