class Solution {
public:
    string reverseWords(string s) {
     vector<string>v;
    string res="";
        int l=s.length();
        int start,i,j;
        for(i=0;i<l;i++)
        {
          if(s[i]!=' ')
          {
              start=i;
          while(i<l && s[i]!=' ')
            {
                i++;
            }
            v.push_back(s.substr(start,i-start));
        }
    }
        for(j=v.size()-1;j>=0;j--)
        {
            res+=v[j];
            res+=" ";
        }
        return res.substr(0,res.length()-1);
    }
};