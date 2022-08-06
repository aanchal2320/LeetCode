class Solution {
public:
    int poorPigs(int buckets, int minutesToDie , int minutesToTest) {
        if(buckets==1)return 0;
        int ans = 1;
        int t = minutesToTest/minutesToDie + 1;
        while(pow(t,ans)<buckets)
            ans++;
        return ans;
    }
};