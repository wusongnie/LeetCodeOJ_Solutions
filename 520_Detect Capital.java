	public class Solution {
		public boolean detectCapitalUse(String word) {
			char[] k = word.toCharArray();
            if(k.length==1)
            return true;
			if ((k[0] >= 65 && k[0] <= 90) && !(k[1] >= 65 && k[1] <= 90)) 
			{
				for (int i = 2; i < k.length; i++) 
				{
					if (k[i] >= 65 && k[i] <= 90)
						return false;
					
				}
				return true;
			} else if ((k[0] >= 65 && k[0] <= 90) && (k[1] >= 65 && k[1] <= 90)) 
			{
				for (int i = 2; i < k.length; i++) 
				{
					if (!(k[i] >= 65 && k[i] <= 90))
						return false;
					
				}
				return true;
			} else if(!(k[0] >= 65 && k[0] <= 90) && !(k[1] >= 65 && k[1] <= 90)) {
				for (int i = 2; i < k.length; i++) 
				{
					if ((k[i] >= 65 && k[i] <= 90))
						return false;
					
				}
				return true;
			}
			return false;
			
			
		}
	}
