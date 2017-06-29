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
    func reverseList(_ head: ListNode?) -> ListNode? {
        var ans = ListNode(0)
        var temp = head
        if head ==  nil{
            return head
        }
        repeat
        {
            if(temp != nil)
            {
                if(ans.next == nil){
                    ans.next = ListNode(temp!.val)
                    temp = temp!.next
                    continue
                }
                var newNode = ListNode(temp!.val)
                newNode.next = ans.next
                ans.next = newNode
                temp = temp!.next
                
            }
            else
            {
                break
            }
        }while true
        return ans.next
    }
}
