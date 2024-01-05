//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
   int i=0;
    int j=n-1;
    int s1=0;
    int s2=0;
    while(i<j){
        if(s1==s2 && i==j)
            return(i);
        if(s1<=s2){
            s1+=A[i];
            i++;
        }
        if(s1==s2 && i==j)
            return(i);
        if(s2<=s1){
            s2+=A[j];
            j--;
        }
        if(s1==s2 and i==j)
            return(i);
            
    }
    return(-1);
}