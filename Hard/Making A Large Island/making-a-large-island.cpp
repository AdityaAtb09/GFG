//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class DisjointSet {
public:
   vector<int> Size, parent;

    DisjointSet(int n) {
        Size.resize(n + 1, 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i) parent[i] = i;
    }

    int findUpar(int node) {
        if (node == parent[node]) return node;
        return parent[node] = findUpar(parent[node]);
    }

    void unionBySize(int u, int v) {
        int ulp_u = parent[u];
        int ulp_v = parent[v];

        if (Size[ulp_u] < Size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            Size[ulp_v] += Size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            Size[ulp_u] += Size[ulp_v];
        }
    }
};

class Solution
{
public:
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
        int n = grid.size();
        int dSize = n * n;
        DisjointSet ds(dSize);

        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, -1, 0, 1};

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) continue;

                int index = i * n + j;
                for (int k = 0; k < 4; ++k) {
                    int di = i + dx[k];
                    int dj = j + dy[k];

                if (di >= 0 && di < n && dj >= 0 && dj < n && grid[di][dj] == 1) {
                        int adjIndex = di * n + dj;
                        if (ds.findUpar(index) != ds.findUpar(adjIndex)) {
                            ds.unionBySize(index, adjIndex);
                        }
                    }
                }
            }
        }

        int largeIsland = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) continue;
                set<int> st;
                for (int k = 0; k < 4; ++k) {
                    int di = i + dx[k];
                    int dj = j + dy[k];

                if (di >= 0 && di < n && dj >= 0 && dj < n && grid[di][dj] == 1) {
                        int adjIndex = di * n + dj;
                        st.insert(ds.findUpar(adjIndex));
                    }
                }
                int tempIsland = 1;
                for (auto it: st) {
                    tempIsland += ds.Size[it];
                }
                largeIsland = max(largeIsland, tempIsland);
            }
        }

        for (int i = 0; i < dSize; ++i) {
            largeIsland = max(largeIsland, ds.Size[i]);
        }

        return largeIsland;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends