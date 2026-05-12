class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++){
            if (!m.contains(nums[i])){
                m.insert({nums[i], 0});
            }else{
                return true;
            }
        }
        return false;
    }
};