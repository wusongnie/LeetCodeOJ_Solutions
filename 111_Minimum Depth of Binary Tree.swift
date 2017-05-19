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
    func minDepth(_ root: TreeNode?) -> Int {
        if(root==nil){
            return 0
        }
        var left=minDepth(root!.left)
        var right=minDepth(root!.right)
        if(left==0||right==0){
            return left+right+1
        }
        else
        {
            return min(left,right)+1
        }
   
    }
}
