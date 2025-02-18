//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos, neg;
        for(int i : arr) {
            if(i < 0)
                neg.push_back(i);
            else
                pos.push_back(i);
        }
        
        int idx = 0, a = 0, b = 0;

        for(int i=0; i<arr.size(); i++) {
            if(i < pos.size())
                arr[idx++] = pos[a++];
            if(i < neg.size())
                arr[idx++] = neg[b++];
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends