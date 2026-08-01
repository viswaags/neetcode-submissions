class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        for(int i = 0; i < min(strs[0].size(), strs.back().size()); i++)
        {
            if(strs[0][i] != strs.back()[i])
            {
                return strs[0].substr(0, i);
            } 
        }

        return strs[0];
    }
};