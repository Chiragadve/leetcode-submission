class Node:
    def __init__(self):
        self.child = defaultdict(Node)
        self.dl = False

class Solution:
    def deleteDuplicateFolder(self, paths):
        def dfs1(node):
            key = "(" + "".join(c + dfs1(node.child[c]) for c in node.child) + ")"
            if key != "()": pattern[key].append(node)
            return key
        
        def dfs2(node, path):
            for c in node.child:
                if not node.child[c].dl:
                    dfs2(node.child[c], path + [c])
            if path: ans.append(path[:])
            
        pattern, root, ans = defaultdict(list), Node(), []
        
        for path in sorted(paths):
            node = root
            for c in path: node = node.child[c]
                
        dfs1(root)
        
        for nodes in pattern.values():
            if len(nodes) > 1:
                for i in nodes: i.dl = True
        
        dfs2(root, [])
        return ans