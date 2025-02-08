class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();

        int lastoc[26] = {0};

        for(int i=0;i<n;i++)
        {
            lastoc[s[i] - 'a'] = i;
        }

        int ptr=0;
        int maxlen = 0;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            maxlen = max(maxlen,lastoc[s[i]-'a']);

            if(maxlen == i)
            {
                ans.push_back(i-ptr+1);
                ptr=i+1;
            }
        }

        return ans;
    }
};