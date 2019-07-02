class Solution {
    private static int[] a = null;
	private static int num = 0;
    private int ans = 0;
    
    int totalNQueens(int n) {
        num = n;
        a = new int[num+1];
		queen(1, num);
		return ans;
    }
    

	public static boolean validate(int row, int col) {
		int j = 1;
		while (j < row) {
			if (a[j] == col || Math.abs(j - row) == Math.abs(a[j] - col))
				return false;
			j++;
		}
		return true;
	}

	public void queen(int row, int target) {
		if (row > target) {
			ans++;
		} else {
			for (int col = 1; col <= num; col++) {
				if (validate(row, col) == true) {
					a[row] = col;
					queen(row + 1, target);
				}
			}
		}
	}
};
