class Solution:
    def sumGame(self, num: str) -> bool:
        n = len(num)

        sumL = sumR = 0
        qL = qR = 0

        for i in range(n // 2):
            if num[i] == '?':
                qL += 1
            else:
                sumL += int(num[i])

        for i in range(n // 2, n):
            if num[i] == '?':
                qR += 1
            else:
                sumR += int(num[i])
        
        if (qL + qR) % 2 == 1:
            return True
        return sumL - sumR != (qR - qL) * 9 // 2