class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> my_set;
        for (int i = 0; i < nums.size(); i++){
            if (my_set.find(nums[i]) == my_set.end()){
                my_set.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};