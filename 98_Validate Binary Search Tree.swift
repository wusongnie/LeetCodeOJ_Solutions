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
    func isValidBST(_ root: TreeNode?) -> Bool {
        isValidBST1(root)
        return isValidBST2(k)
        
        
    }
    
    func isValidBST1(_ root: TreeNode?){
        if(root == nil){
            return
        }else{
            isValidBST(root!.left);
            k.append(root!.val);
            isValidBST(root!.right);
        }
    }
    func isValidBST2(_ array:[Int])->Bool{
        if(array.count<=1){
        return true
        }
        
        var flag=true
        for i in 0...(array.count-2){
            if(array[i]>=array[i+1])
            {
                flag=false
                break
            }
        }
        return flag
    }
    
    
}
