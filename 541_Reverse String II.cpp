class Solution {
public:
    string reverseStr(string s, int k) {
        size_t i = 0;
        size_t size = s.size();
        while(i < size){
            int len = k;
            if(size - i < k){
                len = size - i;
            }
            reverse(s.begin() + i, s.begin() + i + len);
            i += k * 2;
        }
        return s;
    }
    
};
