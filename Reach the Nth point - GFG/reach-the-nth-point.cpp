// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    if(n==1 || n==0)
		    {
		        return 1;
		    }
		    int prev1=1;
		    int prev2=1;
		    for(int i=2;i<=n;i++)
		    {
		        int curr=(prev1+prev2)%1000000007;
		        prev2=prev1;
		        prev1=curr;
		    }
		    return prev1;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends