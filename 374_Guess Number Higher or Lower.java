/* The guess API is defined in the parent class GuessGame.
   @param num, your guess
   @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
      int guess(int num); */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        long start = 1;
        long end = n;
        long mid = (start + end)/2;
        while(mid >= 1 && mid <= n){
            mid = (start + end)/2;
            if (guess((int)mid)==1){
                start = mid + 1 ;
            }else if(guess((int)mid)==-1){
                end = mid - 1;
            }else{
                return (int)mid;
            }
        }
        return (int)mid;
    }
}
