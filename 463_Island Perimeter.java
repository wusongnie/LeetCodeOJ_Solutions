public class Solution {
		public int islandPerimeter(int[][] grid) {
			int square=0;
			int adjcent = 0;
			for (int i = 0; i < grid.length; i++) 
			{
				for (int j = 0; j < grid[0].length; j++) 
				{
					if (grid[i][j] == 1) 
					{
						square++;
					
					if (i<grid.length-1 && grid[i + 1][j] == 1) 
					{
						adjcent++;
					}
					if (j<grid[0].length-1 && grid[i][j+1] == 1) 
					{
						adjcent++;
					}
					
					}
					
				}
			
			}
			
			return square*4-adjcent*2;
		}
	}
