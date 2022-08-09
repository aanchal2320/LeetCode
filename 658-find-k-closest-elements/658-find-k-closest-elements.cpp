class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         priority_queue<pair<int, int> > pq;
        for(auto ele:arr)
        {
            pq.push(make_pair(abs(x-ele),ele));
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};