# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        self.ans=False
        def sum1(node,sum,key):
            if not node:
                return
            elif not node.right and   not node.left:
                sum=sum+node.val
                if sum==key:
                    self.ans=True
                return
            sum=sum+node.val
            sum1(node.left,sum,key)
            sum1(node.right,sum,key)
        sum1(root,0,targetSum)
        return self.ans
