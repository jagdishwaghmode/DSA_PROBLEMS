class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        st = set()
        i = 0
        n = len(sentence)
        for i in range(n):
            st.add(sentence[i])

        return len(st)==26
        