class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        sum = 0
        m = len(mat)
        for i in range(m):
            sum+=mat[i][i]
        for i in range(m):
            sum += mat[i][m - 1 - i]

        if(m%2==0):
            return sum
        else:
            return sum-mat[m//2][m//2]

        