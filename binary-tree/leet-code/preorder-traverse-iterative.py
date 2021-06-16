# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def preorderTraversal(self, root: TreeNode):
        l = []
        s = []
        if root != None:
            s.append(root)
        while len(s) > 0:
            a = s.pop()
            l.append(a.val)
            if a.right != None:
                s.append(a.right)
            if a.left != None:
                s.append(a.left)
        return l
