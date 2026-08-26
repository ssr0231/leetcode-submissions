class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        ans = ""
        if s.count("1") < k:
            return ans

        for i in range(len(s)):
            for j in range(i+1,len(s)+1):
                sub = s[i:j]
                if sub.count("1") == k:
                    if ans == "" or len(sub) < len(ans) or (len(sub) == len(ans) and sub < ans):
                        ans = sub
        return ans