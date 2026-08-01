class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;

        for(auto str : strs)
        {
            vector<int> count(26, 0);

            for(char c : str)
            {
                count[c - 'a']++;
            }

            string key = to_string(count[0]);

            for(int i = 1; i < 26; i++)
            {
                key += '#' + to_string(count[i]);
            }

            mp[key].push_back(str);
        }

        for(auto it : mp)
        {
            res.push_back(it.second);
        }

        return res;
    }
};
