class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        mp={}
        for x in words[0]:
            mp[x] = mp.get(x,0)+1
        for i in range(len(words)):
            mp1={}
            for ch in words[i]:
                mp1[ch] = mp1.get(ch, 0) + 1
            
            for ch in mp:
                mp[ch] = min(mp[ch], mp1.get(ch, 0))

        ans = []

        for ch in mp:
            for j in range(mp[ch]):
                ans.append(ch)
        return list(ans)
            