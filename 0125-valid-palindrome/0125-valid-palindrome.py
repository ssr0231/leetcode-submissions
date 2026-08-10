class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1 = ""
        for ch in s:
            if ch.isalnum():
                s1+=ch.lower()
        st=0
        end=len(s1)-1
        while st<=end:
            if(s1[st]!=s1[end]):
                return False
            st+=1
            end-=1
        return True