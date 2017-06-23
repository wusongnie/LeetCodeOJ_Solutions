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
    var k=[Int]()
    func postorderTraversal(_ root: TreeNode?) -> [Int] {
        helper(root)
        return k
    }
    func helper(_ root: TreeNode?){
        if(root != nil){
            helper(root!.left);
            helper(root!.right);
            k.append(root!.val);
        }
        return
    }
}
