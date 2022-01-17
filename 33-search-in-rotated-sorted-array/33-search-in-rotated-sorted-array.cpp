class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int n =h;
        int l =0;
        while(l<=h){
            int mid =l+ ((h-l)>>1);
            if (nums[mid]==target) return mid;
            if(nums[0]<=nums[mid]){ 
                if(target >=nums[0] && target < nums[mid]) h= mid-1;
                else l= mid+1;
                
            }
            else { 
                if(target<=nums[n] && target >nums[mid]) l = mid+1;
                else h = mid-1;
            }
        }
        return -1;
    }
    
};