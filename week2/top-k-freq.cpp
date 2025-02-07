class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mpp;
        for(int i : nums)
        {
            mpp[i]++;
        }

        for(auto p : mpp)
        {
            pq.push({p.second,p.first});
        }

        vector<int> ans;

        for(int i=0;i<k;i++)
        {
            int topp = pq.top().second;
            pq.pop();
            ans.push_back(topp);
        }

        return ans;
    }
};