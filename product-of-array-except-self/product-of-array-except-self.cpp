class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count0 = 0, totprod = 1;
	for(int x : nums)
	{
		if(x == 0) count0++;
		totprod *= x? x : 1;
	}

	vector<int> ans(nums.size());
	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i]) ans[i] = count0? 0 : totprod/nums[i];
		else ans[i] = count0 > 1? 0 : totprod;
	}

	return ans;
    }
};