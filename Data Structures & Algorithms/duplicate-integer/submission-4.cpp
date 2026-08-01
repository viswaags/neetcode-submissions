class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            int cnt = 1;

            for(int j = 0; j < n; j++)
            {
                if(cnt > 1)
                {
                    return true;
                }
                else if(i != j && nums[i] == nums[j])
                {
                    cnt++;
                }
            }
        }

        return false;
    }
};