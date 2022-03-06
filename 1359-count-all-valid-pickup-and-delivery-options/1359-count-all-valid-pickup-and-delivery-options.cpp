class Solution {
public:
    int countOrders(int n) {
         long mod=1e9+7;
        long ans=1;
        
        for(long i=1; i<=n;i++){			
            ans= (ans *i * (2*i-1))%mod;
        }
        
        return ans;
    }
};