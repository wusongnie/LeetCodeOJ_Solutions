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
    public TreeNode invertTree(TreeNode root) {
        
        if(root==null)
        return root;
        TreeNode temp=null;
        if(root.left!=null&&root.right!=null)
        {
            temp=root.left;
            root.left=root.right;
            root.right=temp;
            invertTreeHelper(root.left);
            invertTreeHelper(root.right);
        }else if(root.left!=null&&root.right==null){
            root.right=root.left;
            root.left=null;
            invertTreeHelper(root.right);
        }else if(root.left==null&&root.right!=null){
            root.left=root.right;
            root.right=null;
            invertTreeHelper(root.left);
        }
        
        return root;
    }
    public void invertTreeHelper(TreeNode root){
        TreeNode temp=null;
        if(root.left!=null&&root.right!=null)
        {
            temp=root.left;
            root.left=root.right;
            root.right=temp;
            invertTreeHelper(root.right);
            invertTreeHelper(root.left);
        }else if(root.left!=null&&root.right==null){
            root.right=root.left;
            root.left=null;
            invertTreeHelper(root.right);
        }else if(root.left==null&&root.right!=null){
            root.left=root.right;
            root.right=null;
            invertTreeHelper(root.left);
        }else{
            return;
        }
        
    }
}
