from collections import defaultdict, Counter

class Solution:
    def minimumHammingDistance(self, source: List[int], target: List[int], allowedSwaps: List[List[int]]) -> int:
        n = len(source)
        parent = list(range(n))

        def find(i):
            if parent[i] == i:
                return i
            parent[i] = find(parent[i])
            return parent[i]

        def union(i, j):
            root_i = find(i)
            root_j = find(j)
            if root_i != root_j:
                parent[root_i] = root_j

        for a, b in allowedSwaps:
            union(a, b)

        components = defaultdict(list)
        for i in range(n):
            components[find(i)].append(i)

        hamming_distance = 0

        for indices in components.values():
            source_counts = Counter(source[i] for i in indices)
            target_counts = Counter(target[i] for i in indices)
            
            matches = 0
            for val in source_counts:
                if val in target_counts:
                    matches += min(source_counts[val], target_counts[val])
            
            hamming_distance += (len(indices) - matches)

        return hamming_distance