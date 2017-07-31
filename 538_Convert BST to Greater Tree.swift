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
    var sum = 0
    func convertBST(_ root: TreeNode?) -> TreeNode? {
        helper1(root)
        helper2(root)
        return root
    }
    func helper1(_ root:TreeNode?){
        if root == nil{
            return 
        }
        helper1(root!.left)
        sum = sum + root!.val
        helper1(root!.right)
    }
    func helper2(_ root:TreeNode?){
        if root == nil{
            return 
        }
        helper2(root!.left)
        var temp = root!.val
        root!.val = sum
        sum = sum - temp 
        helper2(root!.right)
    }
}
