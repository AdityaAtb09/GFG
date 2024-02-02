//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int countStudents(vector<int> &arr, int pages) {
        int n = arr.size(); //size of array.
        int students = 1;
        long long pagesStudent = 0;
        for (int i = 0; i < n; i++) {
            if (pagesStudent + arr[i] <= pages) {
                //add pages to current student
                pagesStudent += arr[i];
            }
            else {
                //add pages to next student
                students++;
                pagesStudent = arr[i];
            }
        }
        return students;
    }
    
    int findPages(vector<int>& arr, int n, int m) {
    //book allocation impossible:
        if (m > n) return -1;
    
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int students = countStudents(arr, mid);
            if (students > m) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    return low;
}
  
    int splitArray(int arr[] ,int N, int K) {
        // code here
        vector<int> a ; 
        for(int i = 0 ; i<N; i++) a.push_back(arr[i]) ; 
        return findPages(a , N , K) ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends