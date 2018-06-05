public class Solution {
    public String reverseWords(String s) {
        String [] array=s.trim().split("\\s+");
        String ans="";
        for(int i=array.length-1;i>=0;i--){
        	ans=ans+array[i];
        	ans=ans+" ";
        }
		return ans.trim();
    }
    
}
