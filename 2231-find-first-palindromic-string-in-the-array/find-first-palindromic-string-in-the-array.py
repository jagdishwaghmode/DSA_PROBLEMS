class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for i in words:
            s = i[::-1]
            if s==i:
                return i

        return ""