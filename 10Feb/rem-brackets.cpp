#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string minRemoveToMakeValid(string s) {
            string st;
    
            int ctr =0;
    
            for(char& c: s)
            {
                if(c == ')' && ctr ==0)
                {
                    continue;
                }
    
                if(c == '(')
                {
                    ctr++;
                }
                else if(c == ')')
                {
                    ctr--;
                }
    
                st.push_back(c);
            }
    
            string res;
    
            ctr=0;
    
            while(!st.empty())
            {
                char c = st.back();
                st.pop_back();
    
                if(c == '(' && ctr == 0)    continue;
    
                if(c == ')')
                {
                    ctr++;
                }
                else if(c == '(')
                {
                    ctr--;
                }
    
                res.push_back(c);
            }
    
            reverse(res.begin(),res.end());
            return res;
        }
    };