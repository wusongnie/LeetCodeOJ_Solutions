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
    var ans = [Int]()
    func inorderTraversal(_ root: TreeNode?) -> [Int] {
        helper(root)
        return ans
        
    }
    func helper(_ root: TreeNode?) {
        if root == nil{
            return
        }
        
        helper(root!.left)
        ans.append(root!.val)
        helper(root!.right)     
    }
}
