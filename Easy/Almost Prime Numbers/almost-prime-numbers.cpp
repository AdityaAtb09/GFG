//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


void printKAlmostPrimes(int k, int n);

int main() {
	// your code goes herei
int t;
cin>>t;
while(t--){
	int n,k;
	cin>>n>>k;
    printKAlmostPrimes(n,k);
    cout<<endl;
}


	return 0;
}
// } Driver Code Ends


/*You are required to complete this function*/
void printKAlmostPrimes(int k, int n)
{
//Your code here
 for ( int number{ 2 }; n; ++number ) {
        int fcount{}, temp{ number };
        for ( const int prime : { 2, 3, 5, 7, 11, 13 })
            while (!( temp % prime )) temp /= prime, ++fcount;
        if ( fcount + ( temp != 1 ) == k ) {
            cout << number << ' ';
            --n;
        }
    }
}