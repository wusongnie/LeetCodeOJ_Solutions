public class Solution {

	public static int[] a = null;
	public static int num = 0;
	public static List<List<String>> ansStr;

	public static List<List<String>> solveNQueens(int n) {
		num = n;
		a = new int[num + 1];
		ansStr = new ArrayList<List<String>>();
		queen(1, num);
		return ansStr;
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

	public static void queen(int row, int target) {
		if (row > target) {
			ArrayList<String> tempArray = new ArrayList<String>();
			for (int i = 1; i <= num; i++) {
				StringBuilder temp = new StringBuilder();
				for (int j = 1; j <= num; j++) {
					if (a[i] != j) {
						temp.append(".");
					} else {
						temp.append("Q");
					}
				}
				tempArray.add(temp.toString());
			}
			ansStr.add(tempArray);
		} else {
			for (int col = 1; col <= num; col++) {
				if (validate(row, col) == true) {
					a[row] = col;
					queen(row + 1, target);
				}
			}
		}
	}

}
