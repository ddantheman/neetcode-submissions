class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int m;
        while (l < r){
            m = (r + l) / 2;
            if (nums[m] < nums[r]){
                r = m;
            }else{
                l = m + 1;
            }
        }

        int split = l;
        l = 0;
        r = nums.size()-1;
        if (target >= nums[split] && target <= nums[r]){
            l = split;
        }else{
            r = split - 1;
        }
        while(l <= r){
            m = (r + l) / 2;
            if (nums[m] == target){
                return m;
            }else if (nums[m] < target){
                l = m + 1;
            }else{
                r = m - 1;
            }
        }
        return -1;
    }
};
