class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int res=0,n=nums.size(),i;
        int flag=1;
            for(i=0;i<nums.size()-1;i++){
                    if(i%2==0 and nums[i]==nums[i+1]  and flag){
                        res++;
                        flag=0;
                    }
                    else if(i%2==1 and nums[i]==nums[i+1] and flag==0){
                        res++;
                        flag=1;
                    }
                }
        int x=n-res;
        if(x%2==0){
            return res;
        }
        return res+1;
			
    }
};