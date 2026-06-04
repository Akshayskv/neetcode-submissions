class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zc = 0;
        long int ptd = 1;
        long int pdt_without_zeros = 1;
        for(int i = 0; i < nums.size(); i++) {
            ptd *= nums[i];
            if(nums[i] != 0) {
                pdt_without_zeros *= nums[i];
            } else {
                zc++;
            }
        }

        if(zc > 1) {
            pdt_without_zeros = 0;
            ptd = 0;
        }

        vector<int> output;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                output.push_back(ptd/nums[i]);
                continue;
            }
            output.push_back(pdt_without_zeros);
        }

        return output;
    }
};
