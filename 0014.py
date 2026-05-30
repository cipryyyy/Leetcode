class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(set(strs)) == 1:
            return strs[0]
        for i in range(200):
            tester = set()
            for el in strs:
                tester.add(el[0:i])
            if len(tester) != 1:
                break
            ret = list(tester)[0]
        return ret
