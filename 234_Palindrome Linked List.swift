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
    func isPalindrome(_ head: ListNode?) -> Bool {
        if head == nil{
            return true
        }
        var curr = head
        var k = [Int]()
        while(curr != nil){
            k.append(curr!.val)
            curr = curr!.next
        }
        for i in 0...k.count-1{
            if k[i] != k[k.count-1-i]{
                return false
            }
        }
        return true
    }
}
