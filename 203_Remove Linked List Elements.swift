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
    func removeElements(_ head: ListNode?, _ val: Int) -> ListNode? {
        if head == nil{
            return head
        }
        var curr1 = head
        var ans:ListNode = ListNode(head!.val)
        var curr2 = ans
        repeat{
            if curr1 != nil{
                if curr1!.val != val{
                    curr2.next = ListNode(curr1!.val)
                    curr2 = curr2.next!
                }
            }
            else{
                break
            }
            curr1 = curr1!.next
        }while true
        return ans.next
    }
}
