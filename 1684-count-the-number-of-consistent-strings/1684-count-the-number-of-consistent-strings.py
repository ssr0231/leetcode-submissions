class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        mp = {}
        for char in allowed:
            mp[char]=mp.get(char,0)+1

        ans = len(words)
        for i in range (len(words)):
            for ch in words[i]:
                if ch not in mp:
                    ans-=1
                    break
        return ans
                    

            