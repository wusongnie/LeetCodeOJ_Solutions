/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    double temp[][] = new double[10000][2];
    public List<Double> averageOfLevels(TreeNode root) {
        helper(root,0);
        List<Double> ans = new ArrayList<Double>();
        for (double[] k : temp){
            if(k[1] == 0){
                break;
            }
            ans.add(k[0]/k[1]);
        }
        return ans;
    }
    public void helper(TreeNode root, int height){
        if (root == null){
            return;
        }
        temp[height][0] += root.val;
        temp[height][1] += 1;
        helper(root.left,height+1);
        helper(root.right,height+1);
    }
}
