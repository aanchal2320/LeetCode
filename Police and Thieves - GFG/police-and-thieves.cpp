// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        int t=0,p=0;
        int count=0;
        while(arr[t]!='T' && t<n)
        {
            t++;
        }
        while(arr[p]!='P' && p<n)
        {
            p++;
        }
        while(t<n && p<n)
        {
            if(abs(t-p)<=k)
            {
                count++;
                do
                {
                    t++;
                }while(t<n && arr[t]!='T');
                do
                {
                    p++;
                }while(arr[p]!='P' && p<n);
            }
            else
            {
                if(t>p)
                {
                    do
                    {
                        p++;
                    }while(arr[p]!='P' && p<n);
                }
                else
                {
                   do
                {
                    t++;
                }while(t<n && arr[t]!='T'); 
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 

  // } Driver Code Ends