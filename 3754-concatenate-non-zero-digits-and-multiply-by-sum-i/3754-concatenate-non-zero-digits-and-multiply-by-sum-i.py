class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x=0
        i=1
        sum=0
        while n>0:
            d=n%10
            if(d!=0):
                x+=d*i
                sum+=d
                i*=10
            n//=10
            
        return x * sum