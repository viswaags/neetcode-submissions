class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = n / 3;
        unordered_set<int> st;

        for(int num : nums){
            int cnt = 0;
            for(int i : nums){
                if(i == num){
                    cnt++;
                }
            }

            if(cnt > maj){
                st.insert(num);
            }
        }

        return vector<int>(st.begin(), st.end());
    }
};