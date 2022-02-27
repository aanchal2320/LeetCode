class Solution {
public:
   
        bool check(vector<int>& time, int totalTrips,long  long t){
      long  long ans = 0;
        for(int i = 0;i<time.size();i++){
            ans += t/time[i];
            if(ans >=totalTrips)return true;
        }
        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long   long  hi = LLONG_MAX;
        long long lo = 1;
        long long  mid = 0;
        long  long res = -1;
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            bool ans = check(time,totalTrips,mid);
            if(ans){
                hi = mid -1;
                res = mid;
            }else{
                lo = mid +1;
            }
        }
        return res;
        
    }
};