class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        int n = len*2;
        vector<int> res(n);

        for(int i = 0; i < n; i++)
        {
            res[i] = (nums[i % len]);
        }
        
        return res;
    }
};