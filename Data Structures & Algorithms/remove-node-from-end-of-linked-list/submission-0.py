# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr=head
        a=[]
        while curr:
            a.append(curr)
            curr=curr.next
        dele=len(a)-n
        if dele!=0:
            a[dele-1].next=a[dele].next
            a[dele].next=None
        else:
            curr=head
            head=curr.next
            curr.next=None
        return head
            
            
        

        