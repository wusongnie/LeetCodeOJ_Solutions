class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(res,"",n,n);
        return res;
    }
    
    void helper(vector<string>& res, string s, int left, int right){
        if(left > right)
            return;
        if(left == 0 && right == 0){
            res.push_back(s);
            return;
        }
        
        if(left > 0){
            helper(res,s + "(", left - 1, right);
        }
        
        if(right > 0){
            helper(res,s + ")", left, right - 1);
        }
    }
};
