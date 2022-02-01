// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int n=str.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[str[i]]++;
        }
        int maxi=0;
        char a;
        for(int i=0;i<256;i++)
        {
            if(mp[i]>maxi)
            {
                maxi=mp[i];
                a=i;
            }
        }
        return a;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends