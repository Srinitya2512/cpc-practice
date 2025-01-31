#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& pts, int k) {
        int n = pts.size();
        
        int lsum =0 ,rsum = 0;

        for(int i=0;i<k;i++)
        {
            lsum += pts[i];
        }
        int maxsum = lsum;
        int rin = n-1;

        for(int i=k-1;i>=0;i--)
        {
            lsum = lsum - pts[i];
            rsum = rsum + pts[rin];

            maxsum = max(maxsum,lsum+rsum);
            rin--;
        }
        return maxsum;
    }
};