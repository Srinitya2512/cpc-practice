class Solution {
public:
    int minimumSize(vector<int>& nums, int mop) {
        int n=nums.size();
        int low = 1;
        int high= *max_element(nums.begin(),nums.end());

        while(low<high)
        {
            int mid = low + (high-low)/2;

            long long opcnt=0;

            for(int num: nums)
            {
                opcnt += (num-1)/mid;
            }

            if(opcnt <= mop)
            {
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
