class Solution:
    def findSubstring(self, s: str, words: list[str]) -> list[int]:

        wordLen = len(words[0])
        wordCount = len(words)

        need = {}

        for word in words:
            need[word] = need.get(word, 0) + 1

        ans = []

        for start in range(wordLen):

            left = start
            right = start
            count = 0
            window = {}

            while right + wordLen <= len(s):

                word = s[right:right + wordLen]
                right += wordLen
                
                if word not in need:
                    window = {}
                    count = 0
                    left = right
                    continue

                window[word] = window.get(word, 0) + 1
                count += 1

                while window[word] > need[word]:
                    leftWord = s[left:left + wordLen]

                    window[leftWord] -= 1
                    left += wordLen
                    count -= 1

                if count == wordCount:
                    ans.append(left)

        return ans