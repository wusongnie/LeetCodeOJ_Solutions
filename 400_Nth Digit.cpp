class Solution {
public:
    int findNthDigit(int n) {
        if(n <= 9)
            return n;
        int curr = n;
        long counter = 9;
        int base = 1;
        int track = 0;
        while(curr >= counter * base){
            curr -= counter * base;
            track += counter;
            base++;
            counter *= 10;
        }
        track += curr / base;

        if(curr % base == 0){
            return to_string(track)[base - 1] - 48;
        }
        return to_string(track + 1)[curr % base -1] - 48;
    }
};
