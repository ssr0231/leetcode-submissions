class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        max_len = 0

        for i in range(len(s)):
            mp = {}
            for j in range(i, len(s)):
                mp[s[j]] = mp.get(s[j], 0) + 1

                if mp[s[j]] > 2:
                    break

                max_len = max(max_len, j - i + 1)

        return max_len