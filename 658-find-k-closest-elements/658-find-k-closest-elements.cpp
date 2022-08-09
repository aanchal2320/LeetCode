class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // vector<int>ans;
        int low=0,high=arr.size()-k;
        while(low<high)
        {
             int mid=low+(high-low)/2;
            if(x-arr[mid]>arr[mid+k]-x)
            {
               low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[low+i]);
        }
        return ans;
    }
};