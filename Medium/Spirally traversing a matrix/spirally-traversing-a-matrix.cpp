//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
         int total = r*c;
         int startingRow = 0;
         int endingRow = r-1;
         int startingCol = 0;
         int endingCol = c-1;
         int cnt = 0;
         
         while(cnt<total){
         for(int i=startingCol; cnt<total && i<=endingCol; i++){
             ans.push_back(matrix[startingRow][i]);
                 cnt++;
             }
             startingRow++;
             
             for(int i=startingRow;cnt<total && i<=endingRow; i++){
                 ans.push_back(matrix[i][endingCol]);
                 cnt++;
             }
             endingCol--;
             
             for(int i=endingCol; cnt<total && i>=startingCol; i--){
                 ans.push_back(matrix[endingRow][i]);
                 cnt++;
             }
             endingRow--;
             
             for(int i=endingRow; cnt<total && i>=startingRow; i--){
                 ans.push_back(matrix[i][startingCol]);
                 cnt++;
             }
             startingCol++;
             }
         return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends