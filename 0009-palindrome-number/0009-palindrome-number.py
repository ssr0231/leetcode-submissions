class Solution:
    def isPalindrome(self, x: int) -> bool:
        s1 = str(x)
        if x<0:
            return False
        return s1 == s1[::-1]
