public class Solution {
    public int countSegments(String s) {
        if (s.trim().length() == 0){
            return 0;
        }
        return s.trim().split("\\s+").length;
    }
}
