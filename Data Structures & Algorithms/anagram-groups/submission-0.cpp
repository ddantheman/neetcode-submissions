class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            m[word].push_back(strs[i]);
        }
        for (auto it = m.begin(); it != m.end(); it++){
            anagrams.push_back(it->second);
        }
        return anagrams;
    }
};
