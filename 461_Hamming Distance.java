public class Solution {
    public int hammingDistance(int x, int y) {

        int ds=0;
        int a;
        int b;
        while(x!=0||y!=0)
        {
            
            a=x%2;
            x=x/2;
            
            
            b=y%2;
            y=y/2;
            
            if(a!=b)
            ds++;
            
        }
        return ds;
    }
}
