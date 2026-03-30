# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def same(ro,su):
            if not ro and not su:
                return True
            elif ro and su and su.val==ro.val:
                return same(ro.right,su.right) and same(ro.left,su.left)
            else:
                return False
        if not subRoot:
            return True
        elif not root:
            return False
        elif same(root,subRoot):
            return True
        else:
            return self.isSubtree(root.right,subRoot) or self.isSubtree(root.left,subRoot)
            