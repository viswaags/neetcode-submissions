class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;

        for(int num : nums){
            if(st.count(num)){
                continue;
            }

            st.insert(num);
        }

        vector<int> arr(st.begin(), st.end());

        nums = arr;

        return st.size();
    }
};