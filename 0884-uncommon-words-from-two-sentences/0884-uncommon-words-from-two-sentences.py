class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        l1 = list(s1.split( ))
        l2 = list(s2.split( ))
        mp = {}

        for word in l1 + l2:
            mp[word] = mp.get(word, 0) + 1

        ans = []

        for word in mp:
            if mp[word] == 1:
                ans.append(word)
        return ans