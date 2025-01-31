#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();

        int b1=-prices[0],b2= -prices[0];
        int s1=0,s2=0;

        for(int i=1;i<prices.size();i++)
        {
            b1 = max(b1,- prices[i]);
            s1 = max(s1,b1 + prices[i]);
            b2 = max(b2,s1 - prices[i]);
            s2 = max(s2,b2 + prices[i]);
        }
        return s2;
    }
};