// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        while(l < r){
            int mid = l + (r - l) / 2;
            if(!isBadVersion(mid) && isBadVersion(mid + 1))
                return mid + 1;
            if(!isBadVersion(mid))
                l = mid;
            else
                r = mid;
        }
        return 1;
    }
};
