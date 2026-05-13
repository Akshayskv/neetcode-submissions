class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> data;

        for(int i = 0; i < nums.size(); i++) {
            int n = target - nums[i];
            if(data.contains(n) && data[n] != i) {
                return (i < data[n]) ? vector{i, data[n]} : vector{data[n], i};
            } else {
                data[nums[i]] = i;
            }
        }

        return {};

    }
};
