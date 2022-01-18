// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long a[], int len)
{
  int left=0,right=len-1;
  int max_h=0;
  while(left<right)
  {
      int left_h=a[left];
      int right_h=a[right];
      int min_h=min(left_h,right_h);
      int area=(right-left)*min_h;
      max_h=max(max_h,area);
      if(left_h<right_h)
      {
          left++;
      }
      else
      {
          right--;
      }
  }
  return max_h;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends