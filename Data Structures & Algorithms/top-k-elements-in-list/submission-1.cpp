class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int n = nums.size();
        vector<vector<int>> frequency(n+1);
        vector<int> ans;
        int check = 0;

        for (int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        for (auto it = m.begin(); it != m.end(); it++){
            frequency[it->second].push_back(it->first);
        }
        
        for (int i = n; check != k; i--){
            while (!frequency[i].empty()){
                ans.push_back(frequency[i].back());
                frequency[i].pop_back();
                check++;
            }
        }
        return ans;
    }
};
