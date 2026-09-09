class Solution:
    def countCommas(self, n: int) -> int:
        if len(str(n)) < 4:
            return 0

        elif len(str(n)) >= 4 and len(str(n)) < 7:
            return (n - (10**3) + 1)

        elif len(str(n)) >= 7 and len(str(n)) < 10:
            return (n - (10**6) + 1) + (n - (10**3) + 1)

        elif len(str(n)) >= 10 and len(str(n)) < 13:
            return (n - (10**9) + 1) + \
                   (n - (10**6) + 1) + \
                   (n - (10**3) + 1)

        elif len(str(n)) >= 13 and len(str(n)) < 16:
            return (n - (10**12) + 1) + \
                   (n - (10**9) + 1) + \
                   (n - (10**6) + 1) + \
                   (n - (10**3) + 1)

        else:
            return (n - (10**15) + 1) + \
                   (n - (10**12) + 1) + \
                   (n - (10**9) + 1) + \
                   (n - (10**6) + 1) + \
                   (n - (10**3) + 1)