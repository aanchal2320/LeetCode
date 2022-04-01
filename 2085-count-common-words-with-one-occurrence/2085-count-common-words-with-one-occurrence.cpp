class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp;
        unordered_map<string,int>mpp;
        int count=0;
        for(auto x: words1)
        {
            mp[x]++;
        }
        for(auto x: words2)
        {
            mpp[x]++;
        }
        for(auto x: words1)
        {
            if(mpp.find(x)!=mpp.end() && mp[x]==1 && mpp[x]==1)
            {
                count++;
            }
        }
        return count;
    }
};