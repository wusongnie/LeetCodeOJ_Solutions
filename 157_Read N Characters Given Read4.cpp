// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        char * local = new char[4];
        int count = 0;
        int curr = 0;
        while(curr = read4(local)){
            if(curr + count > n){
                curr = n - count;
            }
            for(int i = 0; i < curr; ++i){
                buf[count + i] = local[i];
            }
            count += curr;
        }
        return count;
    }
};
