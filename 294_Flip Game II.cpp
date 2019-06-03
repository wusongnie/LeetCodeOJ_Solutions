class Solution {
public:
    bool canWin(string s) {
        string tmp = "";
        for (int i = 1; i < s.length(); i++) {
            if (s[i - 1] == '+' && s[i] == '+') {
                tmp = s.substr(0, i - 1) + "--" + s.substr(i + 1);
                if (!canWin(tmp)) {
                    return true;
                }
            }
        }
        return false;
    }
};
