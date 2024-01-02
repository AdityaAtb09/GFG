//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class Solution{
    public:
    pair<int,int> findSmallestRange(int nums[][N], int n, int k)
    {
        int i = 0, j = 0, sz = 0, diff = INT_MAX, cnt = k;
        vector<pair<int, int>> vp(n*k);
        vector<int> mp(k, 0);
        pair<int, int> ans;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        
        for(int l = 0; l < k; l++) pq.push({nums[l][0], {l, 0}});
        
        while(!pq.empty()){
            pair<int, pair<int, int>> p = pq.top();
            vp[sz++] = {p.first, p.second.first};
            pq.pop();
            p.second.second++;
            if(p.second.second == n) continue;
            p.first = nums[p.second.first][p.second.second];
            pq.push(p);
        }
        
        while(j < sz){
            if(++mp[vp[j].second] == 1) cnt--;
            while(cnt == 0){
                if(diff > (vp[j].first - vp[i].first))
                    ans = {vp[i].first, vp[j].first}, diff = vp[j].first - vp[i].first;
                if(--mp[vp[i++].second] == 0) cnt++;
            }
            j++;
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
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends