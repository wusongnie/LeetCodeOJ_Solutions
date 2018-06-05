public class Solution {
    public String complexNumberMultiply(String a, String b) {
          
          String[] A=a.split("\\+");
	      String[] B=b.split("\\+");
	        
	        int iA=Integer.parseInt(A[1].substring(0, A[1].length()-1));
	        int iB=Integer.parseInt(B[1].substring(0, B[1].length()-1));
	        int igeshu=iA*Integer.parseInt(B[0])+iB*Integer.parseInt(A[0]);
	        int shibu=Integer.parseInt(A[0])*Integer.parseInt(B[0])-iA*iB;
	        
	        return ""+shibu+"+"+igeshu+"i";
    }
}
