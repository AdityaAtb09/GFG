//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    int lis(int nums[],int B[],int N,int M){
       unordered_set<int> s(B,B+M);
       vector<int> res;
       for(int i=0; i<N; i++) {
           if(s.find(nums[i])==s.end()) continue;
           auto it = std::lower_bound(res.begin(), res.end(), nums[i]);
           if(it==res.end()) res.push_back(nums[i]);
           else *it = nums[i];
       }
       return res.size();
    }
  
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        return N+M-2*lis(A,B,N,M);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        cin>>N>>M;
        
        int A[N], B[M];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<M; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.minInsAndDel(A,B,N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends