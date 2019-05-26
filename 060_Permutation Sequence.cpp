class Solution {
public:
    string getPermutation(int n, int k) {
        string res = "";
        string s = "";
        vector<int> factorial(n + 1, 1);
        int sum = 1;
        for(int i = 1; i <= n; ++i){
            s.push_back(i + '0');
            sum *= i;
            factorial[i] = sum;
        }
        k--;
        for(int i = 1; i <= n; ++i){
            int temp = k / factorial[n - i];
            res.push_back(s[temp]);
            s.erase(s.begin() + temp);
            k %= factorial[n - i];
        }
        return res;
    }
};
