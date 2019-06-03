class Solution {
public:
    int i = 0;
    bool verifyPreorder(vector<int>& preorder) {
        return helper(preorder, INT_MIN, INT_MAX);
    }
    bool helper(vector<int>& v, int l, int r){
        if(i == v.size() || v[i] > r){
            return true;
        }
        int mid = v[i++];
        return mid > l && helper(v, l, mid) && helper(v, mid, r);
    }
};
