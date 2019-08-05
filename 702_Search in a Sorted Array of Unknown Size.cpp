// Forward declaration of ArrayReader class.
class ArrayReader;

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        int l = 0; 
        int r = INT_MAX;
        while(l <= r){
            int mid = l + (r - l) / 2;
            int x = reader.get(mid);
            if(x == INT_MAX || x > target){
                r = mid - 1;
            }else if(x < target){
                l = mid + 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};
