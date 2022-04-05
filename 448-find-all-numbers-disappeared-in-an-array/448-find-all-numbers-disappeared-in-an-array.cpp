class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& A) {
        int n=A.size();
        vector<int>ans;
       for(int i = 0; i < n; ++ i)
       {
           while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
           {
               swap(A[i], A[A[i] - 1]);
           }
       }
        
        for(int i = 0; i < n; ++ i)
        {
            if(A[i] != i + 1)
            {
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};