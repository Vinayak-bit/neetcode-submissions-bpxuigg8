# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res=[]
        def tr(root,res):
            if root is None:
                return 
            res.append(root.val)
            tr(root.left,res)
            tr(root.right,res)
        tr(root,res)
        return res