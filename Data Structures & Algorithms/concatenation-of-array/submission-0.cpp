class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        vector<int> res;

        for(int i = 0; i < len; i++)
        {
            res.push_back(nums[i]);
        }

        for(int i = 0; i < len; i++)
        {
            res.push_back(nums[i]);
        }

        return res;
    }
};