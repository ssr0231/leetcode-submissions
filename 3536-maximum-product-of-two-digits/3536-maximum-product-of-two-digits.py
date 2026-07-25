class Solution:
    def maxProduct(self, n: int) -> int:
        l = []
        while n>0:
            l.append(n % 10)
            n = n // 10
        mx_pro = l[0]*l[1]
        for i in range(len(l)):
            for j in range(i+1,len(l)):
                mx_pro = max(mx_pro , l[i]*l[j])
        
        return mx_pro