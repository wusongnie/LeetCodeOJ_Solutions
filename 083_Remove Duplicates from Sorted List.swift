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
    func deleteDuplicates(_ head: ListNode?) -> ListNode? {
        if head == nil{
            return nil
        }
        
        var curr = head
        while curr!.next != nil{
            if curr!.val == curr!.next!.val{
                if curr!.next!.next == nil{
                    curr!.next = nil
                    break
                }
                else{
                    curr!.next = curr!.next!.next
                }
            }
            else{
                curr = curr!.next
            }
        }
        
        return head
    }
}
