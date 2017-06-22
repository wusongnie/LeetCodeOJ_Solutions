public class Solution {
	var depth = 0
	var val = 0
	
	public init(){
	}
	
	public func findBottomLeftValue(_ root: TreeNode?) -> Int {
		traverse(root, depth: 1)
		return self.val
	}
	
	func traverse(_ root: TreeNode?, depth: Int) {
		if(root == nil){
			return
		}
		
		if(depth > self.depth){
			self.depth = depth
			self.val = (root?.val)!
		}
		
		if(root?.left != nil){
			traverse(root?.left, depth: depth + 1)
		}
		
		if(root?.right != nil){
			traverse(root?.right, depth: depth + 1)
		}
	}
}
