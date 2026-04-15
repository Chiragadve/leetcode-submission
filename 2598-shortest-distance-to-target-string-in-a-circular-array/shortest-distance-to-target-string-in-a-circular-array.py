class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        result = float('inf')
        for i in range(len(words)):
            if words[i] == target:
                strdist = abs(i - startIndex)
                cirdist = len(words) - strdist
                result = min(result,strdist,cirdist)
        return result if result != float('inf') else -1

            
        
