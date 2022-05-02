class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++)
        {
            nums1[m++]=nums2[i];
        }
        int gap=m;
        while(true)
        {
          gap=ceil(gap/2.00);
          int i=0,j=gap;
        while(i!=m && j!=m)
        {
            if(nums1[i]>nums1[j])
            {
                swap(nums1[i],nums1[j]);
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        if(gap==1)
        {
            break;
        }
    }
    }
};