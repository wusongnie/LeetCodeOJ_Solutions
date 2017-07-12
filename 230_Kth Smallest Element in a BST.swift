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
    var a=[Int]()
    func kthSmallest(_ root: TreeNode?, _ k : Int) -> Int {
        kthSmallest1(root)
        return a[k-1]    
    }
    
    func kthSmallest1(_ root: TreeNode?){
        if(root == nil){
            return
        }else{
            kthSmallest1(root!.left);
            a.append(root!.val);
            kthSmallest1(root!.right);
        }
    }
    
}
