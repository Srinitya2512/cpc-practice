#include<bits/stdc++.h>
using namespace std;

class Solution {

    public:
        int lengthOfLongestSubstring(string s) {
            
            int n = s.length();
           
            if(n==0)    return 0;
            int maxl = 0;
            unordered_map<char,int> mpp;
            int cu =0;
            for(int i=0;i<n;i++)
            {   
                if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>= cu)
                {
                    cu = mpp[s[i]]+1;
                }
                mpp[s[i]] = i;
                maxl = max(maxl,i - cu + 1);
            }
            return maxl;
        }
    };