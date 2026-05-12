class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++){
            auto search = m.find(target - nums[i]);
            if (search != m.end()){
                return {search->second, i};
            }else{
                m[nums[i]] = i;
            }
        }
        return {};
    }
};
