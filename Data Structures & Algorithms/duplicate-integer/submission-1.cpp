class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> st;
        for(int i = 0; i < nums.size(); i++) {
            if(st.contains(nums[i])) {
                return true;
            }
            st[nums[i]] = 1;
        }

        return false;
    }
};