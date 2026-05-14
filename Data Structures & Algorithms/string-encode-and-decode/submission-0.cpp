class Solution {
public:

    string encode(vector<string>& strs) {
        string msg = "";
        for (int i = 0; i < strs.size(); i++){
            string word = strs[i];
            for (int j = 0; j < word.size(); j++){
                int ascii = word[j];
                msg += to_string(ascii);
                msg += "_";
            }
            msg += " ";
        }
        return msg;
    }

    vector<string> decode(string s) {
        vector<string> strs = {""};
        string ascii = "";
        for (int i = 0; i < s.size(); i++){
            cout << s[i];
            if (s[i] == '_'){
                strs.back() += static_cast<char>(stoi(ascii));
                ascii = "";
            }else if (s[i] == ' '){
                strs.push_back("");
                ascii = "";
            }else{
                ascii += s[i];
            }
        }
        strs.pop_back();
        return strs;
    }
};
