class Solution:
    def countCommas(self, n: int) -> int:
        s = str(n)
        if len(s)<4:
            return 0
        else:
            return n-999