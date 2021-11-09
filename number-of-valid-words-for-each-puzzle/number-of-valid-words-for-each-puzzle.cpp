class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& W, vector<string>&P) {
       unordered_map<int, int> mp;         // { bitmask : frequency }
        vector<int> ans(size(P));
		// following function returns bitmask of a string
        auto getBitmask = [](string& s) {
            int bitmask = 0;
            for(auto c : s) bitmask |= 1 << c-'a';
            return bitmask;
        };
		// generating bitmask for each word and filling in hashmap
        for(auto& word : W)  mp[getBitmask(word)]++;
		// generate bitmask for each puzzle and enumerate over its subset
        for(int i = 0; auto& puzzle : P) {
            int mask = getBitmask(puzzle), cnt = 0, firstLetter = 1 << puzzle[0]-'a';
            for(int submask = mask; submask; submask = (submask - 1) & mask)    // https://cp-algorithms.com/algebra/all-submasks.html
                if(submask & firstLetter)    // ensure 1st letter is present in submask to satisfy condition-1
                    cnt += mp[submask];      // add count of words having same bitmask as submask
            ans[i++] = cnt;
        }
        return ans;
    }
};