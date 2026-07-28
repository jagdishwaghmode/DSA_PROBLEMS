class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        n = len(sentences)
        cnt = 0
        for i in sentences:
            res = len(i.split())
            if res>cnt:
                cnt = res

        return cnt