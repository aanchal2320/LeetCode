// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> a) 
    {
        vector<int>ans;
        int n=a.size();
        int xor_val=0;
        for(int i=0;i<n;i++)
        {
            xor_val=xor_val^a[i];
        }
        int count=0;
        while(xor_val)
        {
            if(xor_val&1)
                break;
            count++;
            xor_val=xor_val>>1;
        }
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]&(1<<count))
            {
                xor1=xor1^a[i];
            }
            else
            {
                xor2=xor2^a[i];
            }
        }
        if(xor1<xor2)
        {
            ans.push_back(xor1);
            ans.push_back(xor2);
        }
        else
        {
            ans.push_back(xor2);
            ans.push_back(xor1);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends