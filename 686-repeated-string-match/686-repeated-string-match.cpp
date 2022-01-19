class Solution {
public:
     int contains(string a,string b)
     {
         int n = a.length();
        int m = b.length();
        for(int i=0;i<=n-m;i++)
        {
            if(a[i]==b[0])
            {
                if(a.substr(i,m)==b)
                    return 1;
            }
        }
        return 0;    
    }
    
    int repeatedStringMatch(string a, string b) 
    {
        string acpy = a;
        int count=1;
        while(a.size()<b.size())
        {
            a = a + acpy;
            count++;
        }
        if(contains(a,b)!=0)
            return count;
        if(contains(a+acpy,b)!=0)
            return count+1;
        
        return -1;
    }
};