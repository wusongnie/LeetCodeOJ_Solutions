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
    func mergeTwoLists(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        if l1 == nil{
            return l2
        }
        if l2 == nil{
            return l1
        }
        var c1 = l1
        var c2 = l2
        var ans = ListNode(0)
        
        
        var c3 = ans
        while true {
            if c1!.val > c2!.val{
                c3.next = ListNode(c2!.val)
                c2 = c2!.next
            }else
            {
                c3.next = ListNode(c1!.val)
                c1 = c1!.next
            }
            if c1 == nil && c2 == nil
            {
                return ans
            }else if c1 == nil || c2 == nil{
                c3 = c3.next!
                break
            }
            c3 = c3.next!
        }
        if c1 == nil{
            c3.next = c2
        }
        if c2 == nil{
            c3.next = c1
        }
        return ans.next
    }
}
