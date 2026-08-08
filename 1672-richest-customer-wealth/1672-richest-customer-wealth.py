class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        m = len(accounts)
        n = len(accounts[0])
        max_sum = 0
        for i in range(m):
            sum = 0
            for j in range(n):
                sum+=accounts[i][j]
            max_sum = max(sum,max_sum)
        return max_sum