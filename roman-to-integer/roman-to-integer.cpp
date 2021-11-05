class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>h;
        int n=s.length();
         h.insert({'I',1});
         h.insert({'V',5});
         h.insert({'X',10});
         h.insert({'L',50});
         h.insert({'C',100});
         h.insert({'D',500});
         h.insert({'M',1000});
        int res=0;
        int temp=h[s[n-1]];
        res+=temp;
        for(int i=n-2;i>=0;i--)
        {
           if(h[s[i]]==temp)
           {
               res+=h[s[i]];
           }
            else if(h[s[i]]>temp)
            {
                res+=h[s[i]];
                temp=h[s[i]];
             }
            else
            {
                res-=h[s[i]];
                temp=h[s[i]];
            }
        
        }
        return res;
    }
};