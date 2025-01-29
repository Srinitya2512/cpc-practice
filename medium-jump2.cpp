class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int curr = 0,maxi=0,ans=0;
        for(int i=0;i<n-1;i++)
        {
            maxi=max(maxi,i+nums[i]);

            if(curr == i)
            {
                ans+=1;
                curr = maxi;
            }
        }
        return ans;
    }
};
