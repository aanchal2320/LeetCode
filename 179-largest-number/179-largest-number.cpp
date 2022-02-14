class Solution {
public:
    static bool comparator(string a,string b)
    {
        return (a+b)>(b+a);
    } 
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        string x="";
        for(auto i: nums)
        {
            v.push_back(to_string(i));
        }
        sort(v.begin(),v.end(),comparator);
        if(v[0]=="0")
            return "0";
        for(auto i:v)
        {
            x+=i;
        }
        return x;
    }
};
