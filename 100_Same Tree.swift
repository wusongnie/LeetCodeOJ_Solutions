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
    var k1=[Int]()
    var k2=[Int]()
    func isSameTree(_ p: TreeNode?, _ q: TreeNode?) -> Bool {
        if(p==nil&&q==nil)
        {
            return true
        }
        if(p==nil||q==nil){
            return false
        }
        
        if(p!.val != q!.val){
            return false
        }
        else{
            return isSameTree(p!.left,q!.left)&&isSameTree(p!.right,q!.right)
        }
    }
}
