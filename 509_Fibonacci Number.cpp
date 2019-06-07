class Solution {
public:
    int fib(int N) {
        if(N == 0)
            return 0;
        int i = 1;
        int j = 1;
        int c = 2;
        while(c < N){
            c++;
            if(c % 2 == 0){
                i = i + j;
            }else{
                j = i + j;
            }
        }
        return i > j ? i : j;
    }
};
