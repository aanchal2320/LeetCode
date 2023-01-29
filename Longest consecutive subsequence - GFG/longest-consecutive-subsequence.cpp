//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
       int maxi=0;
       unordered_set<int>s;
       for(int i=0;i<n;i++)
       {
           s.insert(arr[i]);
       }
       for(int i=0;i<n;i++)
       {
           if(!s.count(arr[i]-1)) //when arr[i]-1 is not present in set
           {
               int curr=arr[i];
               int curr_count=1;
               while(s.count(curr+1))
               {
                   curr=curr+1;
                   curr_count++;
               }
               maxi=max(maxi,curr_count);
           }
       }
       return maxi;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends