class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int>s;
        for(auto x: arr)
        {
            s.insert(x);
        }
        int count=0,ans=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int a=arr[i],b=arr[j],c=a+b;
                count=2;
                while(s.find(c)!=s.end())
                {
                    count++;
                    a=b;
                    b=c;
                    c=a+b;
                }
                ans=max(ans,count);
            }
        }
        if(ans>2)
            return ans;
        return 0;
    }
};