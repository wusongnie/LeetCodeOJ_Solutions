class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int len = num1.size() > num2.size() ? num2.size() : num1.size();
        string res = "";
        int carry = 0;
        for(int i = 0; i < len; ++i){
            int sum = num1[i] - '0' + num2[i] - '0' + carry;
            carry = sum / 10;
            int remain = sum % 10;
            res = to_string(remain) + res;
        }
        
        string num = num1.size() > num2.size() ? num1 : num2;
        for(int i = len; i < num.size(); ++i){
            int sum = num[i] - '0' + carry;
            carry = sum / 10;
            int remain = sum % 10;
            res = to_string(remain) + res;
        }
        if(carry == 1){
            res = "1" + res;
        }
        return res;
    }
};
