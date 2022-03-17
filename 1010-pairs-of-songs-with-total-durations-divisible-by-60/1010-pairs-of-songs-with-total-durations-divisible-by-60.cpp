class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
         int res=0;
        unordered_map<int,int> remainders;
        for(int i=0;i<time.size();i++){
            if(time[i]%60==0){
                res+=remainders[0];
            }else{
                res+=remainders[60-time[i]%60];
            }
            remainders[time[i]%60]++;
        }
        return res;
    }
};