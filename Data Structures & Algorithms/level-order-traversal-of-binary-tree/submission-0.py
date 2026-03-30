# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        res=[]
        def ans(ro,dep):
            if not ro:
                return None
            elif len(res)==dep:
                res.append([])
            res[dep].append(ro.val)
            ans(ro.left,dep+1)
            ans(ro.right,dep+1)
            
        
        ans(root,0)
        return res

        