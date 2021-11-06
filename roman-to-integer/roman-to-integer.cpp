class Solution {
public:
    int romanToInt(string str) {
        unordered_map<char,int>h;
         h.insert({'I',1});
         h.insert({'V',5});
         h.insert({'X',10});
         h.insert({'L',50});
         h.insert({'C',100});
         h.insert({'D',500});
         h.insert({'M',1000});
        int len=str.length(),num,sum=0;
        for(int i=0;i<len; )
        {
            if(i==(len-1)||(h[str[i]]>=h[str[i+1]]))
            {
                num=h[str[i]];
                i++;
            }
            else
            {
                num=h[str[i+1]]-h[str[i]];
                i=i+2;
            }
            sum=sum+num;
        }
       return sum; 
    }
};