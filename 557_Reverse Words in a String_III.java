public class Solution {
    public String reverseWords(String s) {
        String str="";
        String[]k=s.split(" ");
		for(int i=0;i<k.length;i++){
			StringBuilder  strss = new StringBuilder(k[i]);
			str=str+strss.reverse().toString()+" ";
		}
		return str.substring(0,str.length()-1);
        
    }
    
}
