class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        int n = len*2;
        vector<int> res;

        for(int i = 0; i < n; i++)
        {
            res.push_back(nums[i % len]);
        }
        
        return res;
    }
};