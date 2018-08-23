class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x <= 3) return 1;
        if(x <= 8) return 2;
        int result = 0;
        for(int i = 3; i <= x/2; ++i){
            if(i * i <0){
                result = i;
                break;
            }  
            if(i * i > x)
                return i - 1;
            if(i * i == x)
                return i;
        }
        return result - 1;
    }
};
