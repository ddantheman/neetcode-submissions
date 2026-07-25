class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for (int i = 0; i < t.size(); i++){
            freq[t[i]]--;
        }
        int shortestL = 0;
        int shortestR = s.size()-1; 
        int l = 0;
        int count = t.size();
        for (int r = 0; r < s.size(); r++){
            freq[s[r]]++;
            if (freq[s[r]] <= 0){
                count--;
            }
            while (freq[s[l]] > 0 && l < r){
                freq[s[l]]--;
                l++;
            }
            if ((r - l < shortestR - shortestL) && count == 0){
                shortestL = l;
                shortestR = r;
            }
        }
        if (count != 0){
            return "";
        }else{
            return s.substr(shortestL, shortestR-shortestL+1);
        }
    }
};
