class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int maxLen = 0, cnt = 0, i = 0;
        int curr = nums[0];

        while(i < nums.size()){
            if(curr != nums[i]){
                curr = nums[i];
                cnt = 0;
            }

            while(i < nums.size() && nums[i] == curr){
                i++;
            }

            cnt++;
            curr++;
            maxLen = max(maxLen, cnt);
        }

        return maxLen;
    }
};
