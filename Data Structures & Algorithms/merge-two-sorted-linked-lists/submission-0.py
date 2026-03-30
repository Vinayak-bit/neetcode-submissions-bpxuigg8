# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        merge=ListNode(2)
        nextis=merge
        while list1 and list2:
            if list1.val<=list2.val:
                nextis.next=list1
                list1=list1.next
            else:
                nextis.next=list2
                list2=list2.next
            nextis=nextis.next
        if list1:
            nextis.next=list1
        elif list2:
            nextis.next=list2
        return merge.next

                