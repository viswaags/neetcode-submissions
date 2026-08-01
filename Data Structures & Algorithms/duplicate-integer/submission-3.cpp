class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();

        for(int num : nums)
        {
            st.insert(num);
        }

        if(st.size() == n)
        {
            return false;
        }

        return true;
    }
};