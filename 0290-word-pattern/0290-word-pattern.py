class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split(" ")
        if len(words)!=len(pattern):
            return False

        mp = {}

        for i in range(len(pattern)):
            ch = pattern[i]
            word = words[i]

            if ch in mp:
                if mp[ch] != word:
                    return False
            else:
                if word in mp.values():
                    return False

                mp[ch] = word

        return True