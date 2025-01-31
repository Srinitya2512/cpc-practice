#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxA=0;
        int n=heights.size();
        vector<int> left(n,-1);
        vector<int> right(n,n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                right[st.top()] = i;
                st.pop();
            }

            if(!st.empty())
            left[i] = st.top();

            st.push(i);
        }

        for(int i=0;i<n;i++)
        {
            maxA=max(maxA,(right[i]-left[i]-1)*heights[i]);
        }
        return maxA;
    }
};