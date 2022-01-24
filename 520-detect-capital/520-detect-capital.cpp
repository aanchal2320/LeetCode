class Solution {
public:
    bool detectCapitalUse(string word) {
        int c1=0,c2=0;
        for(char x: word)
        {
            if(x>=97 && x<=122)
                c1++;
            else if(x>=65 && x<=90)
                c2++;
        }
        if(word[0]>=65 && word[0]<=90)
        {
            return (c2==1)||(c2==word.size());
        }
        else
        {
            return (c1==word.size());
        }
    }
};