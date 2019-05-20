class Solution {
public:
    bool isHappy(int n) {
        if(n <= 0) return false;
	    int sum = 0;
	    while(n != 0) {
		    int d = n % 10;
		    sum += d * d;
		    n = n / 10;
	    }
	    if(sum == 1 || sum == 7) return true;
	    if(sum >= 2 && sum <= 9) return false;
	    return isHappy(sum);
    }
};
