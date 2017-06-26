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
    var k = 0
    func sumOfLeftLeaves(_ root: TreeNode?) -> Int {
        helper(root)
        return k
    }
    func helper(_ root:TreeNode?){
        if(root == nil)
        {
            return 
        }
        
        if(root!.left != nil && root!.left!.left == nil && root!.left!.right == nil){
            k = k + root!.left!.val
        }
        
        sumOfLeftLeaves(root!.left)
        sumOfLeftLeaves(root!.right)
    }
    
}
