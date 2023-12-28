//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int n)
    {
        //Your code here
        vector<string>res;
        unordered_map<int,string> mp = {{0,""},{1,""},{2,"abc"},
        {3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"}, {8,"tuv"},{9,"wxyz"}};


        string t="";
        queue<string>q;
        q.push(t);
        int size=1;


        for(int i=0;i<n;i++)
        {
            while(size--)
            {
                string tmp=q.front();
                q.pop();
                for(int j=0;j<mp[a[i]].size();j++)
                {
                    q.push(tmp+mp[a[i]][j]);
                }
            }
            size=q.size();
        }


        while(!q.empty())
        {
            res.push_back(q.front());
            q.pop();
        }


        return res;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends