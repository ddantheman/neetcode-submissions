class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix = {nums[0]};
        vector<int> suffix = {nums[nums.size()-1]};
        vector<int> ans(nums.size());
        // 2, 3, 4
        for (int i = 1; i < nums.size(); i++){
            prefix.push_back(prefix[i-1] * nums[i]);
        }

        for (int i = nums.size() - 2; i >= 0; i--){
            suffix.insert(suffix.begin(), suffix[0] * nums[i]);
        }

        for (int i = 0; i < nums.size(); i++){
            if (i == 0){
                nums[i] = suffix[1];
            }else if (i == nums.size()-1){
                nums[i] = prefix[nums.size()-2];
            }else{
                nums[i] = prefix[i-1] * suffix[i+1];
            }
        }
        return nums;
    }
};
