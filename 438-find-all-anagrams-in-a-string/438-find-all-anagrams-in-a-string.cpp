class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       
        int p_len = p.size(), s_len = s.size();
        
        if (p_len > s_len) {
            return {};
        }
        
        vector<int> p_freq(26, 0), s_freq(26, 0), ans;
        
        for (int i = 0; i < p_len; i++) {
            p_freq[p[i] - 'a']++;
            s_freq[s[i] - 'a']++;
        }
        
        if (p_freq == s_freq) {
            ans.push_back(0);  
        } 

        for (int i = 1; i < s_len - p_len + 1; i++) {
            s_freq[s[i - 1] - 'a']--;
            s_freq[s[i + p_len - 1] - 'a']++;
            if (s_freq == p_freq) {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};