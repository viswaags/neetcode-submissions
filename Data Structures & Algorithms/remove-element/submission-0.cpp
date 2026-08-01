class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> arr;

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] != val)
            {
                cnt++;
                arr.push_back(nums[i]);
            }
        }

        for(int j = 0; j < arr.size(); j++)
        {
            nums[j] = arr[j];
        }

        return cnt;
    }
};