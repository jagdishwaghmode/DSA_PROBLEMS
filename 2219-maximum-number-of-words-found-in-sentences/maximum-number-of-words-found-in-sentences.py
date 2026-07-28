class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        cntSpace = 0
        maxSpace = 0
        n = len(sentences)
        i = 0

        for i in range(n):
            size = len(sentences[i])
            cntSpace = 0
            for j in range(size):
                if sentences[i][j]==" ":
                    cntSpace+=1
            
            maxSpace = max(cntSpace, maxSpace)

        return maxSpace+1