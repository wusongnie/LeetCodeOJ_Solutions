public class Solution {
	public char findTheDifference(String s, String t) {
        if(t=="")
        	return s.toCharArray()[0];
        if(s=="")
        	return t.toCharArray()[0];
        char[] SS=s.toCharArray();
        char[] TT=t.toCharArray();
        
        Arrays.sort(SS);
        Arrays.sort(TT);
        int count;
        char[]k;
        if(SS.length>TT.length){
        	count=TT.length;
        	k=SS;
        	}        
        else
        	{
        	count=SS.length;
        	k=TT;
        	}
        for(int i = 0;i<count;i++)
        {
        	if(SS[i]!=TT[i]&&TT[i+1]==SS[i])
        		return TT[i];
        	
        }
        return k[count];
    }
}
