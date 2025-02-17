#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void dfs(int start, int tar,vector<vector<int>>& ans,vector<vector<int>>& graph,vector<int>& pathV)
        {
            pathV.push_back(start);
            if(start == tar)
            {
                ans.push_back(pathV);
            }
           else{
            for(int adn: graph[start])
            {
                dfs(adn,tar,ans,graph,pathV);
            }
           }
            pathV.pop_back();
        }
        vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
            int n = graph.size();
            vector<vector<int>> ans;
            vector<int> pathV;
            dfs(0,n-1,ans,graph,pathV);
            return ans;
        }
    };