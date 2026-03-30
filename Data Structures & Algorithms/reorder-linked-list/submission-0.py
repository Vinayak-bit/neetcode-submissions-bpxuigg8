# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        a=[]
        b=ListNode()
        head1=b
        while head:
            a.append(head)
            head=head.next
        ini=0
        for i in range(len(a)):
            if i%2==0:
                head1.next=a[ini]
                head1=head1.next
                ini+=1
            else:
                head1.next=a[len(a)-ini]
                head1=head1.next
        head1.next=None
        head=b