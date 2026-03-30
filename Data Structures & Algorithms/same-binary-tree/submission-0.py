# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        self.ans=True
        def same(p,q):
            if p==None and q==None:
                return 
            elif p==None or q==None:
                self.ans=False
                return
            elif p.val!=q.val:
                self.ans=False
                return 
            same(p.right,q.right)
            same(p.left,q.left)
        same(p,q)
        return self.ans