class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> letters;
        int maxSize = 0;
        int startIndex = 0;
        for (int endIndex = 0; endIndex < s.length(); endIndex++){
            while (letters.contains(s[endIndex])){
                letters.erase(s[startIndex]);
                startIndex++;
            }
            letters.insert(s[endIndex]);
            maxSize = max(maxSize, endIndex - startIndex + 1);
        }
        return maxSize;
    }
};
