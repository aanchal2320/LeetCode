class Solution {
public:
    string capitalizeTitle(string title) {
        title.push_back(' ');
        string ans="";
        for(int i=0;i<title.size();i++)
        {
            string temp="";
            for(;title[i]!=' ';i++)
            {
                temp+=tolower(title[i]);
            }
            if(temp.length()>2)
                temp[0]=toupper(temp[0]);
            if(ans=="")
                ans+=temp;
            else
                ans+=" "+temp;
        }
        return ans;
        
    }
};