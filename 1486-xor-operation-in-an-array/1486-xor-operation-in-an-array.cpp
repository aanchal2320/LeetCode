class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums;
        int xor_val=0;
        for(int i=0;i<n;i++)
        {
            int x=start+2*i;
            nums.push_back(x);
            xor_val=xor_val^nums[i];
        }
        return xor_val;
    }
};