/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init(_ val: Int) {
 *         self.val = val
 *         self.next = nil
 *     }
 * }
 */
class Solution {
    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        helper(l1,l2,0)
        return l1
        
    }
    func helper(_ l1: ListNode?, _ l2: ListNode?, _ k: Int)
    {
        var sum=0
        
        if(l1 == nil && l2 == nil){
            return
        }
        
        if(l1!.next == nil && l2!.next != nil)
        {
            l1!.next=ListNode(0)
        }
        
        if(l2!.next == nil && l1!.next != nil)
        {
            l2!.next=ListNode(0)
        }
        
        if(l1 != nil && l2 != nil){
            sum = l1!.val+l2!.val+k
        }
        var jinwei = 0
        if sum>=10 {
            sum=sum-10
            jinwei=1
        }
        
        l1!.val = sum
        
        if(jinwei == 1 && l1!.next == nil && l2!.next == nil)
        {
            l1!.next = ListNode(0)
            l2!.next = ListNode(0)
        }
        helper(l1!.next,l2!.next,jinwei)
        
    }
    
}
