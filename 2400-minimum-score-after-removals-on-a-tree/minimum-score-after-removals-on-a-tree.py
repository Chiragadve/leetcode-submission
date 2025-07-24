class Solution:
    def minimumScore(self, nums, edges):
        from collections import defaultdict

        n = len(nums)
        adj = defaultdict(list)

        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)

        total = 0
        for x in nums:
            total ^= x

        self.res = float('inf')
        self.val = nums
        self.adj = adj
        self.total = total

        def dfs2(x, parent, xor1, ancestor):
            xorr = self.val[x]
            for child in self.adj[x]:
                if child == parent:
                    continue
                xorr ^= dfs2(child, x, xor1, ancestor)
            if parent == ancestor:
                return xorr
            xor2 = xorr
            xor3 = self.total ^ xor1 ^ xor2
            self.res = min(self.res, max(xor1, xor2, xor3) - min(xor1, xor2, xor3))
            return xorr

        def dfs(x, parent):
            xorr = self.val[x]
            for child in self.adj[x]:
                if child == parent:
                    continue
                xorr ^= dfs(child, x)

            for child in self.adj[x]:
                if child == parent:
                    dfs2(child, x, xorr, x)
            return xorr

        dfs(0, -1)
        return self.res
