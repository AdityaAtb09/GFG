//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int countDistinctSubstring(string s);

int main()
{
 int t,l,i,j;
 int temp;
    cin>>t;
 while(t--){
 string s;
  cin>>s;
  cout<<countDistinctSubstring(s)<<endl;

 }
}


// } Driver Code Ends

class node{
    public:
    node*child[26]={NULL};
};


   int add(node*root,string&s){
       node*curr=root;
       int cnt=0;
       for(int i=0;i<s.size();i++){
           if(curr->child[s[i]-'a']==NULL){
               curr->child[s[i]-'a']=new node();
               cnt+=1;
           }
           curr=curr->child[s[i]-'a'];
       }
         return cnt;
   }
/*You are required to complete this method */
int countDistinctSubstring(string s)
{
    //Your code here
    node*root=new node();
    int ans=0;
    while(s.size()){
        int val=add(root,s);
        ans+=val;
        s.erase(0,1);
    }
    return ans+1;
}