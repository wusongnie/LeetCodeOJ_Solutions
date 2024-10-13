class Solution {
public:
    int nthUglyNumber(int n) {
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;

        vector<int> ugly;
        ugly.push_back(1);
        int curr_size = 1;
        while(curr_size < n) {
            int num1 = ugly[p1] * 2;
            int num2 = ugly[p2] * 3;
            int num3 = ugly[p3] * 5;
            ugly.push_back(min({num1, num2, num3}));
            if(num1 == ugly[curr_size]) {
                p1++;
            }

            if(num2 == ugly[curr_size]) {
                p2++;
            }

            if(num3 == ugly[curr_size]) {
                p3++;
            }

            curr_size++;
        }

        return ugly.back();
    }
};
