// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int start=1;
        long int end=n;
        long int mid;
        long int res=n;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(isBadVersion(mid)==true)
            {
                res=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return res;
    }
};