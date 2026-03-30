# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.res=0
        def dia(root):
            if root is None:
                return -1
            left=dia(root.left)+1
            right=dia(root.right)+1
            self.res=max(self.res,left+right)
            return max(left,right)
        dep=dia(root)
        return max(dep,self.res)