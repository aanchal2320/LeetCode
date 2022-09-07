class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxi_left=INT_MIN,maxi_right=INT_MIN,left_prod=1,right_prod=1;
       for(int i=0;i<nums.size();i++)
       {
           left_prod*=nums[i];
           maxi_left=max(maxi_left,left_prod);
           if(left_prod==0)
           {
               left_prod=1;
           }
       }
      for(int i=nums.size()-1;i>=0;i--)
      {
          right_prod*=nums[i];
          maxi_right=max(maxi_right,right_prod);
           if(right_prod==0)
           {
               right_prod=1;
           }
      }
        return max(maxi_left,maxi_right);
    }
};