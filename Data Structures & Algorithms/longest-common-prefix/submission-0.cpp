class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s1 = strs[0];

        for(int i = 1; i < strs.size(); i++)
        {
            int j = 0;

            while(j < min(s1.size(), strs[i].size()))
            {
                if(s1[j] != strs[i][j])
                {
                    break;
                }

                j++;
            }

            s1 = s1.substr(0, j);
        }

        return s1;
    }
};