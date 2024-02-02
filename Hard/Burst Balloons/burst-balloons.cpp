//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int maxCoins(int N, vector<int> &arr) {
        // code here
        arr.insert(arr.begin(), 1);
        arr.push_back(1);

        // Create a 2D DP array to store the results of subproblems
        vector<vector<int>> dp(N + 2, vector<int>(N + 2, 0));

        // Iterate over the length of the subarray
        for (int len = 1; len <= N; ++len) {
            // Iterate over all possible subarrays of the current length
            for (int left = 1; left <= N - len + 1; ++left) {
                int right = left + len - 1;

                // Burst each balloon in the subarray and find the maximum coins
                for (int last = left; last <= right; ++last) {
                    dp[left][right] = max(dp[left][right],
                        arr[left - 1] * arr[last] * arr[right + 1] + dp[left][last - 1] + dp[last + 1][right]);
                }
            }
        }

        return dp[1][N];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends