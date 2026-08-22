class Solution:
    def checkDivisibility(self, n: int) -> bool:
        s = divisor_(n)
        if n % s == 0:
            return True
        return False

def divisor_(n):
        pro = 1
        digi_sum = 0
        while(n>0):
            digi_sum+=n%10
            pro*=n%10
            n//=10
        return digi_sum+pro