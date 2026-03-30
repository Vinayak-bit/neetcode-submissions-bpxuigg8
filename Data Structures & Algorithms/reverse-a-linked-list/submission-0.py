# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev=None
        after=head
        while after:
            next_no=after.next
            after.next=prev
            prev=after
            after=next_no
        head=prev
        return head