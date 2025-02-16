#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool dfs(int node, int ncol, int vis[], int col[], vector<vector<int>>& graph) 
        {
            vis[node] = 1;
            col[node] = ncol;
    
            for (auto adn : graph[node]) 
            {
                if (!vis[adn]) 
                {
                    if (!dfs(adn, !ncol, vis, col, graph)) 
                    {
                        return false;
                    }
                } 
                else if (col[adn] == col[node]) 
                {
                    return false;
                }
            }
            return true;
        }
        bool isBipartite(vector<vector<int>>& graph) 
        {
            int n = graph.size();
            int vis[n];
            int col[n];
    
            fill(vis, vis + n, 0);
            fill(col, col + n, -1);
    
            for (int i = 0; i < n; i++) 
            {
                if (!vis[i]) 
                {
                    if (!dfs(i, 0, vis, col, graph)) 
                    {
                        return false;
                    }
                }
            }
            return true;
        }
    };