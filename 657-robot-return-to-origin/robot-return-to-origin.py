class Solution:
    def judgeCircle(self, moves: str) -> bool:
        U = moves.count('U')
        D = moves.count('D')
        L = moves.count('L')
        R = moves.count('R')
        
        return True if abs(L - R) + abs(U - D) < 1 else False