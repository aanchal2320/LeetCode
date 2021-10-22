class Solution {
public:
    static bool compare(const pair<int, int>&i, const pair<int, int>&j) 
    { 
        return i.second>j.second;
    } 
    string frequencySort(string s) {
        unordered_map<char,int> h;
        for(auto y:s)
        {
            h[y]++;
        }
         vector<pair<char,int>>v;
         for(auto x:h)
         {
             v.push_back({x.first,x.second});
         }
        sort(v.begin(),v.end(),compare);
        string res="";
        for(auto i:v)
        {
            while((i.second)--)
            {
                res+=i.first;
            }
        }
        return res;
    }
};