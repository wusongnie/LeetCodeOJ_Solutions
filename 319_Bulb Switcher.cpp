class Solution {
public:
    int bulbSwitch(int n) {
        int res = 0;
        for(int i = 1; i <= n; ++i){
            if(isPerfectSquare(i))
                res++;
        }
        return res;
    }
    bool isPerfectSquare(double x) {   
        double sr = sqrt(x); 
        return ((sr - floor(sr)) == 0); 
} 
    
};
