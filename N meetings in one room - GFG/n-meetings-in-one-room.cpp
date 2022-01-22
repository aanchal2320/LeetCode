// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
       pair<int,int>a[n+1];
       for(int i=0;i<n;i++)
       {
           a[i].first=end[i];
           a[i].second=start[i];
       }
        sort(a,a+n);
        int limit=a[0].first;
        vector<int>m;
        m.push_back(a[0].second+1);
        for(int i=1;i<n;i++)
        {
            if(a[i].second>limit)
            {
                m.push_back(a[i].second+1);
                limit=a[i].first;
            }
        }
        return m.size();
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends