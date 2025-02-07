class Solution {
public:
    int func(vector<int>& weights,int cap)
    {
        int d = 1, load = 0;
        int n = weights.size();
        for(int i = 0; i < n;i++)
        {
            if(load + weights[i] > cap)
            {
                d = d + 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }

        return d;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        for(auto x : weights)
        {
            high += x;
        }

        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(func(weights,mid) <= days)
            {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};