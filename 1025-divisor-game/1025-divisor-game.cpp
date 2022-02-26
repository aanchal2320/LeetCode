class Solution {
public:
    bool divisorGame(int n) {
        int flag=0;
        if(n%2==0)
        {
           flag=1;
        }
        else
        {
            flag=0;
        }
        return (flag==1);
    }
};