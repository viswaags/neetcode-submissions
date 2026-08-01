class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;

            for(int j = 0; j < n; j++)
            {
                if(nums[j] == nums[i])
                {
                    cnt++;
                }
            }

            if(cnt > 1)
            {
                return true;
            }
        }

        return false;
    }
};