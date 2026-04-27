class Solution:
    def hasValidPath(self, grid: List[List[int]]) -> bool:
        # 1. Increase recursion depth for 300x300 grids
        sys.setrecursionlimit(10**5)
        
        m, n = len(grid), len(grid[0])
        visited = [[False for _ in range(n)] for _ in range(m)]
        
        # 2. Define the "plugs" for each street type (row_offset, col_offset)
        directions = {
            1: [(0, -1), (0, 1)],   # left, right
            2: [(-1, 0), (1, 0)],   # up, down
            3: [(0, -1), (1, 0)],   # left, down
            4: [(0, 1), (1, 0)],    # right, down
            5: [(0, -1), (-1, 0)],  # left, up
            6: [(0, 1), (-1, 0)]    # right, up
        }

        def dfs(i, j):
            # Base Case: Reached the bottom-right cell
            if i == m - 1 and j == n - 1:
                return True
            
            visited[i][j] = True
            
            # Check each possible move for the current street type
            for dr, dc in directions[grid[i][j]]:
                ni, nj = i + dr, j + dc
                
                # Check bounds and visited status
                if 0 <= ni < m and 0 <= nj < n and not visited[ni][nj]:
                    # Connection Check: The neighbor must have a "plug" 
                    # pointing back to the current cell (-dr, -dc)
                    if (-dr, -dc) in directions[grid[ni][nj]]:
                        if dfs(ni, nj):
                            return True
            return False

        # Start the traversal from the top-left cell
        return dfs(0, 0)