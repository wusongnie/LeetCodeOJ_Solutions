/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public var val: Int
 *     public var left: TreeNode?
 *     public var right: TreeNode?
 *     public init(_ val: Int) {
 *         self.val = val
 *         self.left = nil
 *         self.right = nil
 *     }
 * }
 */
class Solution {
    func hasPathSum(_ root: TreeNode?, _ sum: Int) -> Bool {
        if root == nil{
            return false
        }
        if root!.val == sum && root!.left == nil && root!.right == nil{
            return true
        }
        return helper(root!.left,sum,root!.val)||helper(root!.right,sum,root!.val)
    }
    func helper(_ root: TreeNode?, _ sum: Int, _ current:Int) -> Bool {
        if root == nil{
            return false
        }
        
        if current + root!.val == sum && root!.left == nil && root!.right == nil{ 
            return true
        }
        
        return helper(root!.left,sum,current+root!.val)||helper(root!.right,sum,current+root!.val)
    }
}
