#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    
        int numOfMinutes(int n, int head, vector<int>& mgr, vector<int>& t) {
            vector<int> adj[n];
            for(int i=0;i<mgr.size();i++)
            {
                if(mgr[i]!=-1)
                adj[mgr[i]].push_back(i);
            }
            queue<pair<int,int>> q;
            q.push({head,0});
            int maxt=0;
            while(!q.empty())
            {
                auto [curremp, currt] = q.front();
                q.pop();
    
                maxt=max(maxt,currt);
    
                for(int adn : adj[curremp])
                {
                    q.push({adn,currt+t[curremp]});
                }
            }
            return maxt;
        }
    };