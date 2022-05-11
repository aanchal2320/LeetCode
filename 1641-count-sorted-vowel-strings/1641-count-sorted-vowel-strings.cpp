class Solution {
public:
     vector<char>v={'a','e','i','o','u'};
    void help(int n,int &res,char ch)
    {
        if(n==0)
        {
            res++;
        }
        else
        {
            for(auto e:v)
            {
                if(ch<=e)
                {
                    help(n-1,res,e);
                }
            }
        }
    }
    int countVowelStrings(int n) {
        int res=0;
        help(n,res,' ');
        return res;
    }
};