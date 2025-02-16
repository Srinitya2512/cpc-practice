#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> ps;
        vector<vector<vector<int>>> dp;
        int K;
        int mergeStones(vector<int>& stones, int K) {
            int n = stones.size();
    
            this->K = K;
            if((n-1)%(K-1) !=0) return -1;
    
            ps.resize(n+1,0);
            dp.resize(n,vector<vector<int>>(n,vector<int>(K+1,-1)));
    
            for(int i=1;i<=n;i++)
            {
                ps[i] = ps[i-1]+stones[i-1];
            }
    
            return dfs(0,n-1,1);
        }
    
        int dfs(int i,int j,int k)
        {
            if(dp[i][j][k]!=-1) return dp[i][j][k];
    
            if(i == j)  return (k==1)?0 : INT_MAX;
    
            if (k == 1) 
            { 
                int mC = dfs(i, j, K) + ps[j + 1] - ps[i];
                return dp[i][j][k] = mC;
            }
    
            int minCost = INT_MAX;
            for (int mid = i; mid < j; mid += K - 1) 
            { 
                int left = dfs(i, mid, 1);
                int right = dfs(mid + 1, j, k - 1);
                if (left != INT_MAX && right != INT_MAX) 
                    minCost = min(minCost, left + right);
            }
    
            return dp[i][j][k] = minCost;
        }
    };