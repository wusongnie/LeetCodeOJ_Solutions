/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int version = 0;
        while (left < right){
            version = left+(right - left)/2;
            if (isBadVersion(version)){
                right = version; 
            }else{
                left = version + 1;
            }
        }
        return left;
        
    }
}
