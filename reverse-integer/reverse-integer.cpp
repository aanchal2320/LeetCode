class Solution {
public:
    int reverse(int x) {
       long ans=0;
        if(x/10==0)
            return x;
        while(x!=0)
        {
        ans=(ans*10)+(x%10);
        x=x/10;
        }
        if(ans<INT_MIN||ans>INT_MAX)
            return 0;
        else
            return ans;
    }
};