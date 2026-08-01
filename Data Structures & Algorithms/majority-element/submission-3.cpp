class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        int res = 0, maxCount = 0;

        for(int num : nums)
        {
            mp[num]++;

            if(mp[num] > maxCount)
            {
                res = num;
                maxCount = mp[num];
            }
        }

        return res;
    }
};