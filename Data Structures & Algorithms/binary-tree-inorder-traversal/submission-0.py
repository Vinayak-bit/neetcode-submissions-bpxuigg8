# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res=[]
        def tranversal(root,res):
            if root is None:
                return
            tranversal(root.left,res)
            res.append(root.val)
            tranversal(root.right,res)
        tranversal(root,res)
        return res
        