public class Solution {
    public int[] countBits(int num) {
        List<String>bs=new ArrayList<String>();
        String temp="";
        char[]temp1=null;
        int k;
        for(int i=0;i<=num;++i)
        {
            k=0;
            temp=Integer.toBinaryString(i);
            temp1=temp.toCharArray();
            for(int j=0;j<temp1.length;++j)
            {
               if(temp1[i]=='1')++k; 
            }
            bs.add(k);
        }
        
        int [] result = bs.toArray();
        return result;
    
 
    }
}
