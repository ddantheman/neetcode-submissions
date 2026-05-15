class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n_set(nums.begin(), nums.end());
        int length = 0;
        for (auto it = n_set.begin(); it != n_set.end(); it++){
            if (!n_set.contains(*it - 1)){
                // First in sequence
                int check = 1;
                while (n_set.contains(*it + check)){
                    check++;
                }
                if (check > length){
                    length = check;
                }
            }
        }
        return length;
    }
};
