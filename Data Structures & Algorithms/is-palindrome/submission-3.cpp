class Solution {
public:
    bool isPalindrome(string s) {
        int index1 = 0;
        int index2 = s.size()-1;
        while (!(index1 >= index2)){
            while (!isalnum(s[index1]) && (index1 < index2)){
                index1++;
            }
            while (!isalnum(s[index2]) && (index2 > index1)){
                index2--;
            }
            //cout << index1 << s[index1] << " " << index2 << s[index2] << endl;
            if (!(tolower(s[index1]) == tolower(s[index2]))){
                return false;
            }else{
                index1++;
                index2--;
            }
        }
        return true;
    }
};
