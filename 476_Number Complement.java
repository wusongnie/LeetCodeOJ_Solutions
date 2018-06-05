public class Solution {
    public int findComplement(int num) {
        String bstring = Integer.toBinaryString(num);
        char[] bs=bstring.toCharArray();
        String bsbs="";
        for(int i=0;i<bs.length;i++)
        {
            if(bs[i]==48)bsbs=bsbs+"1";
            else
            bsbs=bsbs+"0";
        }
        
        return Integer.valueOf(bsbs,2);
    }
}
