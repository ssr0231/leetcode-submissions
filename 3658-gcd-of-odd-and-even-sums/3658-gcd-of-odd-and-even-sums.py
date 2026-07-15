class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        evensum = 0
        oddsum = 0
        for i in range(1,(2*n)):
            if(i%2 == 0):
                evensum+=i
            else:
                oddsum+=i
        return math.gcd(oddsum,evensum)